#include <iostream>
#include <vector>
int main()
{
    double arr[2][5] = { {1, 2, 3, 4, 5}, {1, 4, 9, 16, 25} };
    double x = 2.9;
    for (int i = 0; i < 5; i++)
    {
        double y0, y1, x0, x1, result;
        int start, end;
        // std::cout << (arr[0][i]) << " ";
        if(arr[0][i] > x)
        {
            double t = 0.5;
            // std::cout << std::endl << i << std::endl;
            start = i - 1;
            end = i;
            x0 = arr[0][start];
            x1 = arr[0][end];
            y0 = arr[1][start];
            y1 = arr[1][end];
            std::cout << "y0 = " << y0 << " y1 = " << y1 << std::endl;
            //result = y0 * (1 - t) + y1 * t;
            result = y0 + (x - x0) * ((y1 - y0) / (x1 - x0));
            std::cout << result;
            break;
        }
    }
    
}
