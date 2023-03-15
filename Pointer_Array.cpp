#include <iostream>

int main()
{
    int luckyNumber[5] = {2, 3, 6, 8, 9};

    std::cout << luckyNumber << std::endl;     // address of first element
    std::cout << &luckyNumber[0] << std::endl; // address of first element

    std::cout << luckyNumber[2] << std::endl;     // value of second index
    std::cout << *(luckyNumber + 2) << std::endl; // value of second index

    int arrayNumbers[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> arrayNumbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << *(arrayNumbers + i) << " ";
    }

    return 0;
}