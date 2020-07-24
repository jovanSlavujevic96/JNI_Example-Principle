#include "NekiLib.h"
#include <iostream>

int main()
{
    A a;
    std::string path = "aA";
    a.setIandJ(path);

    std::cout << "i: " << a.getI() << " j: " << a.getJ() << '\n';
    return 0;
}