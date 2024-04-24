#include <iostream>
#include <array>

int fibFor(int value) 
{
    if (value < 0) 
    {
        std::cout << "Number isn't valid";
    }
    else if (value == 0)
    {
        std::cout << value << "th Fibonacci Number = " << 0;
    }
    else if (value == 1) 
    {
        std::cout << value << "th Fibonacci Number = " << 1;
    }
    else 
    {
        int *arr = new int[value];
        *arr = 0;
        *(arr+1) = 1;
        int count = 1;
        for (int i = 2; i <= value; i++)
        {
            *(arr+i) = *(arr + i - 1) + *(arr + i - 2);
            count++;
            // std::cout << *(arr + i) << std::endl;
        }
        std::cout << value << "th Fibonacci Number = ";
        std::cout << *(arr + count) << std::endl;
        // std::cout << *(arr + count) << std::endl << *arr << std::endl << *(arr + 1) << std::endl << count;
    }
    return 0;
}

int fib(int value) 
{
    if (value == 0)
    {
        return 0;
    }
    else if (value == 1) 
    {
        return 1;
    } 
    else 
    {
        return fib(value - 1) + fib(value - 2);
    }
}

int main() 
{
    fibFor(21);
    std::cout << "Fibonacci Number using Recursion = " << fib(21);
}
