#ifndef NEKILIB_H
#define NEKILIB_H

#include <string>

class A
{
    int i,j;
public:
    A();
    //A(int i, int j);
    A(const std::string& chars);
    ~A();

    //void setI(int i);
    //void setJ(int j);
    void setIandJ(const std::string& chars);
    int getI() const;
    int getJ() const;
};

#endif // NEKILIB_H