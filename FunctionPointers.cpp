#include <iostream>

int getNumber()
{
    return 20;
}

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*funcPtr)() = getNumber;        // this'll give us the address of function.
    std::cout << funcPtr() << std::endl; // Return the value of function

    int (*funcPtr2)(int, int);
    funcPtr2 = Add;

    std::cout << Add(2, 3) << std::endl;
    std::cout << funcPtr2(3, 3) << std::endl;

    return 0;
}