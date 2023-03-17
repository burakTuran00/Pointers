#include <iostream>

int main()
{
    int rows, colums;

    std::cout << "rows, colums: ";
    std::cin >> rows >> colums;

    int **table = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[colums];
    }

    table[1][2] = 88;

    std::cout << table[1][2] << std::endl;

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    delete[] table;

    table = NULL;

    return 0;
}