#include <iostream>

// Variables store value,
// Pointers store an address or memory location.

int main()
{
    int n = 5;                    // n store an integer number like 5.
    std::cout << &n << std::endl; // To print addres of n. & symbol is 'Addres'.

    int *ptr = &n;                 // *ptr store an address of n.
    std::cout << ptr << std::endl; // The value of pointer is address.

    // above lines. The both of the result will be same.

    std::cout << *ptr << std::endl; // To print value of n or pointer.(5)

    *ptr += 5;

    std::cout << *ptr << std::endl; // To print new value of n or pointer. (10)
    std::cout << n << std::endl;    // To print new value of n.(10)

    // Pointer have to be the same type with its paired variable. Like int-int, float-flot, etc.
    // A pointer should have an address. İf it doesn't have address, Then program will give error.

    return 0;
}