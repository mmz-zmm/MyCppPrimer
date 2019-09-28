
#pragma once

class StrBlobPtr;

class StrBlobPtr_Ptr{

    StrBlobPtr& operator *() const 
    {
        return *pStrBlob;
    }

    StrBlobPtr* operator->() const 
    {
        return & this->operator*();
    }

private:
    StrBlobPtr *pStrBlob = nullptr;
};