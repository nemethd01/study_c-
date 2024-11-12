#include <iostream>

int main()
{
    int x = 5;
    // reference
    /*int& another = x;
    std::cout << &x << std::endl;
    std::cout << &another << std::endl;

    another = 10;
    std::cout << another << std::endl;
    std::cout << x << std::endl;*/

    // pointer
    /*int* xPtr = &x; // a pointer, store the address
    *xPtr = 10; // de referencing
    void *xPtr2 = &x;
    std::cout << *xPtr << std::endl; // 10
    std::cout << xPtr << std::endl; // 0x487ffffc54
    std::cout << *static_cast<int*>(xPtr2) << std::endl;*/

    int intArray[5] = {1, 2, 3, 4, 5};

    // array with pointer
    for (int i = 0; i < sizeof(intArray)/sizeof(int); i++)
    {
        std::cout << intArray[i] << std::endl;
        std::cout << *(intArray + i) << std::endl; // ez ugyanaz
    }

    std::cout << *(intArray + 3) << std::endl;
}
