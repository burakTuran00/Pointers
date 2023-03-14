#include <iostream>

void PrintNumber(int *numberPTR)
{
    std::cout << *numberPTR << std::endl;
    std::cout << numberPTR << std::endl;
}
void PrintLetter(char *charPTR)
{
    std::cout << *charPTR << std::endl;
    std::cout << charPTR << std::endl;
}
void Print(void *ptr, char type)
{
    // This void pointer can point a variable of any data type.

    switch (type)
    {
    case 'i':
        std::cout << *((int *)ptr) << std::endl;
        break;

    case 'c':
        std::cout << *((char *)ptr) << std::endl;
        break;
    }
}

int main()
{
    int number = 8;
    char letter = 'a';

    // PrintNumber(&number);
    //  PrintLetter(&letter);

    Print(&number, 'i');
    Print(&letter, 'c');

    return 0;
}