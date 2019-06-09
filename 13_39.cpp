#include "include/13_39_StrVec.h"
#include <memory>
#include <string>
#include <algorithm>
#include <iostream>

/*类内静态成员的类外初始化*/
std::allocator<std::string> StrVec::alloc;

void StrVec::push_back(const std::string& s )
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    if(elements)
    {
        // for (auto p = first_free; p != elements;)
        //     alloc.destroy(--p);
        std::for_each(begin(), end(), [this](std::string & s) { alloc.destroy(&s); });
        std::cout << "destroyed with size of " << size() << "\n";
        alloc.deallocate(elements, cap - elements);
    }
}
StrVec::StrVec(const StrVec & s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}
StrVec::StrVec(StrVec&& s) noexcept
: elements(s.elements), first_free(s.first_free),cap(s.cap)
{
    s.elements = s.first_free = s.cap = nullptr;
}

StrVec::~StrVec()
{
    std::cout << "destroy...\n";
    free();
}

StrVec& StrVec::operator=(const StrVec & rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}
StrVec& StrVec::operator=(StrVec&& rhs) noexcept
{
    if( this != &rhs)
    {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}
void StrVec::reallocate()
{
    auto newcapacity = size() ? 2 * size() : 1;
    auto newdata = alloc.allocate(newcapacity);

    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();

    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}

void StrVec::reserve(size_t n)
{
    if(capacity() < n)
        reallocate();
}
void StrVec::resize(size_t n)
{
    resize(n, std::string());
}
void StrVec::resize(size_t n, const std::string& s)
{
    if( n < size()){
        while(first_free != elements + n){
            alloc.destroy(--first_free);
        }
    }
    else
    {
        if(capacity() < n)
            reserve(n);
        for (auto i = size(); i != n; ++i)
            alloc.construct(first_free++, s);
    }   
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
    auto newdata = alloc_n_copy(il.begin(), il.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

void StrOut(const StrVec& s)
{
    for(auto ps = s.begin(); ps != s.end(); ps++)
    {
        std::cout << *ps << "\n";
    }    
}

