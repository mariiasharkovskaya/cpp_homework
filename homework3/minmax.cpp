#include <iostream>

void minmax(int* arr, int size)
{
    // std::cout << std::endl << "&arr = " << &arr << std::endl << "*&arr = " << *&arr;
    int min = arr[0];
    int max = arr[0];
    // std::cout << std::endl << "arr = " << arr << std::endl;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
        // std::cout << std::endl << "arr = " << arr+i << std::endl;
    }
    std::cout << "max = " << max << std::endl << "min = " << min << std::endl;
}

int main()
{
    int arr[] = { 1, 2, 3, -2, -7, -1, 4, 5, 6, 7, 1, 11, 122, 2, 3, 5, 88, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    // std::cout << size << std::endl;
    // std::cout << arr << std::endl << arr+1 << std::endl;
    minmax(arr, size);
    // std::cout << &arr;
    return 0;
}