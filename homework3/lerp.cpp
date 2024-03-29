#include <iostream>
#include <vector>
int main()
{
    double arr[2][5] = { {1, 2, 3, 4, 5}, {1, 4, 9, 16, 25} };
    double x = 2.9;
    int start = -1;
    int end = -1;
    double y0, y1, x0, x1, result;
    for (int i = 0; i < 5; i++)
    {
        if(arr[0][i] > x)
        {
            start = i - 1;
            end = i;
            break;
        }
    }
    if (start == -1 || end == -1) {
        std::cout << "x is outside the range of values in the array" << std::endl;
		return 1;
    }
    x0 = arr[0][start];
    x1 = arr[0][end];
    y0 = arr[1][start];
    y1 = arr[1][end];
    std::cout << "y0 = " << y0 << " y1 = " << y1 << std::endl;
    result = y0 + (x - x0) * ((y1 - y0) / (x1 - x0));
    std::cout << "Interpolated value of y for x = " << x << ": " << result;
}
