#pragma once
#include <string>
#include <memory>
#include <utility>
#include <initializer_list>

class StrVec
{

  public:
    StrVec():elements(nullptr), first_free(nullptr),cap(nullptr){}
    StrVec(const StrVec &);
    StrVec(StrVec &&) noexcept;
    StrVec(std::initializer_list<std::string>);
    StrVec &operator=(const StrVec &);
    StrVec &operator=(StrVec &&) noexcept;
    ~StrVec();
    void push_back(const std::string &);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }
    void reserve(size_t n);
    void resize(size_t n);
    void resize(size_t n, const std::string & s);

  private:
    /* 类的静态成员需要类外初始化 */
    static std::allocator<std::string> alloc;
    std::pair<std::string *, std::string *> alloc_n_copy(const std::string *, const std::string *);
    void free();
    void reallocate();
    void chk_n_alloc()
    {
        if (size() == capacity())
            reallocate();
    }
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};

void StrOut(const StrVec &s);

