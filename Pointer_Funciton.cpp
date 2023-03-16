#include <iostream>

int GetMin(int numbers[], int size)
{
    int min = numbers[0];

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    return min;
}

int GetMax(int numbers[], int size)
{
    int max = numbers[0];

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    return max;
}

void GetMinAndMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }
}

int main()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    //  std::cout << "Min is " << GetMin(numbers, 5) << std::endl;
    //  std::cout << "Max is " << GetMax(numbers, 5) << std::endl;

    int min = numbers[0];
    int max = numbers[0];

    GetMinAndMax(numbers, 5, &min, &max);

    std::cout << "Min- is " << min << std::endl;
    std::cout << "Max- is " << max << std::endl;
    return 0;
}