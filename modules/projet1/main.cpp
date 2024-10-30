#include <iostream>
#include "header/my_class.h"

int main()
{
    std::cout << "Bonjour!" << std::endl;

    MyClass myClass(4);

    std::cout << myClass.get_value() << std::endl;

    return 0;
}
