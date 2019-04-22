#pragma once

class Y;

class X{
    Y *px = nullptr;
};

class Y{
    X x;
};