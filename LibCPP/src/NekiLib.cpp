#include "NekiLib.h"

A::A()
{
    i = 1;
    j = 2;
}

A::A(const std::string& chars)
{
    int* ptrArr[2] = {&i, &j};
    for(int i=0;i<2;++i)
    {
        (*ptrArr)[i] = std::abs(static_cast<int>(chars.c_str()[i]) - 303);
    }
}
/*
A::A(int i, int j)
    : i(i), j(j)
{

}
*/
A::~A() = default;
/*
void A::setI(int i)
{
    this->i = i;
}

void A::setJ(int j)
{
    this->j = j;
}
*/
void A::setIandJ(const std::string& chars)
{
    int* ptrArr[2] = {&i, &j};
    for(int i=0;i<2;++i)
    {
        (*ptrArr)[i] = std::abs(static_cast<int>(chars.c_str()[i]) - 303);
    }
}

int A::getI() const
{
    return i;
}

int A::getJ() const
{
    return j;
}