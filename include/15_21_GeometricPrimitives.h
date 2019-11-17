#pragma once

#include <string>

static const float PI = 3.1415926;

class Shape{
    public:
        Shape() = default;
        virtual std::string name() const = 0;
        virtual ~Shape() = default;
};

class Shape_2D : public Shape{
    public:
        Shape_2D() = default;
        Shape_2D(float x, float y):x_(x), y_(y){}

        virtual float area() const = 0;
        virtual float circumference() const = 0;
        virtual ~Shape_2D() override{};

    protected:
        float x_ = 0.f;
        float y_ = 0.f;
};

class Shape_3D : public Shape{
    public:
        Shape_3D() = default;
        Shape_3D(float x, float y, float z):x_(x),y_(y),z_(z){}
        virtual float volume() const = 0;
        virtual float surface() const = 0;
        virtual ~Shape_3D() override{};

    protected:
        float x_ = 0.f;
        float y_ = 0.f;
        float z_ = 0.f;
};

class Circle : public Shape_2D{
    public:
    Circle() = default;
    explicit Circle(float radius): radius_(radius){}
    Circle(float x0, float y0, float radius): Shape_2D(x0, y0), radius_(radius){}

    float area() const override{
        return PI * radius_ * radius_;
    }

    float circumference() const override{
        return 2 * PI * radius_;
    }

    std::string name() const override{
        return "Circle";
    }
    ~Circle(){}

protected:
    float radius_ = 1.f;
};

class Sphere : public Shape_3D{
    public:
        Sphere() = default;
        explicit Sphere(float radius):radius_(radius){}
        Sphere(float x0, float y0, float z0, float radius):Shape_3D(x0,y0,z0),radius_(radius){}
        std::string name() const override{
            return "Sphere";
        }
        float volume() const override{
            return PI * radius_ * radius_ * radius_;
        }

        float surface() const override{
            return 4 * PI * radius_ * radius_;
        }
        ~Sphere(){}

    protected:
        float radius_ = 1.f;
};