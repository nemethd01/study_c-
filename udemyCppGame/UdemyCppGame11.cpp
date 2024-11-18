#include <iostream>
#include <memory> // contains smart pointers

// for stack memory example
void printInt(int val)
{
    std::cout << val << std::endl;
    {
        int c = val;
        std::cout << c << std::endl;
    } // this is the end of the scope that c is in. C is then automatically removed from memory.

    int d = 10;
} // both val and d runs out of scope, they are all removed here

void printIntMemoryLeak(int val)
{
    int* c = new int{ val }; // c is a raw pointer

    if (val == 5)
    {
        return; // this is causes memory leak, meaning the memory is not deleted or freed, but the whole program has no variable that hold it's address
    }

    delete c;
}

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

    /*int intArray[5] = {1, 2, 3, 4, 5};

    // array with pointer
    for (int i = 0; i < sizeof(intArray)/sizeof(int); i++)
    {
        std::cout << intArray[i] << std::endl;
        std::cout << *(intArray + i) << std::endl; // ez ugyanaz
    }

    std::cout << *(intArray + 3) << std::endl;*/


    // the stack memory
    int a = 10; // a is create on stack

    int* heapX = new int[3]; // int variable (heapX) with value 3 is created on the heap, and then it's address is stored in the stack variable 'heapX'(which is a pointer).

    delete heapX;
    heapX = nullptr;

    printInt(a);

    printIntMemoryLeak(5); // memory leak
    // heap can be used when need a big storage.
    // the memory not allocated is not automatically removed.

    // to manually free the memory you need to call delete on the pointer

    // c++ is dangerous
    // modern way to use pointers: smart pointers


    // unique pointer
    // unique ptr the usage is very similar to raw pointer. It automatically delete or free the memory when it goes out of scope
    std::unique_ptr<int> intUniquePtr = std::make_unique<int>(5);
    std::cout << intUniquePtr << std::endl;

    // it does not allow copy, but allows movement. The std::move transfers ownership of the raw pointer internally to the other one.
    std::unique_ptr<int> anotherIntUniquePtr = std::move(intUniquePtr); // mostmár az intUniquePtr egy nullptr lett

    std::cout << intUniquePtr << std::endl;
    if (intUniquePtr)
    {
        std::cout << "test" << *intUniquePtr << std::endl;
    }



    // shared pointer
    
}
