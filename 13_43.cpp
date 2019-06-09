#include "include/13_39_StrVec.h"
#include <algorithm>

void StrVec::free()
{
    if(elements){
        std::for_each(begin(), end(), [iter] { alloc.destroy(iter); });
        alloc.deallocate(elements, cap - elements);
    }
}