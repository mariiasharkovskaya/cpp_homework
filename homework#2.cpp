#include <iostream>
using namespace std;

int index_arithmetic(int i, int start, int step)
{
     int num;
     num = start + (i - 1) * step;
     return num;
}

void factorial(int n, int *out)
{
    for ( int i = 1; i <= n; i++ )
    {
        *out = (*out) * i;
    }
}

int myFactorial(int n) 
{
    for (int i = n - 1; i > 1; i--)
    {
        n = n * i;
    }
    return n;
}

int main() {
 int start, step, target_sum, check_sum, position, count, ratio;
 start = 1;
 step = 2;
 position = 5;
 ratio = 3;
 int arr_arithmetic[100];
 int arr_geom[100];
 target_sum = 56;
 check_sum = 0;
 arr_arithmetic[0] = start; 
 arr_geom[0] = start; 
 int geom_amount = 10;
 int geom_sum = 0;
 count = 1;
 
 //Arithmetic Progression
 while (check_sum < target_sum)
 {
     arr_arithmetic[count] = arr_arithmetic[count - 1] + step;
     check_sum += arr_arithmetic[count];
     count++;
 }
 std::cout << "Arithmetic Progression: ";
 for (int i = 0; i < count; i++)
 {
     std::cout << arr_arithmetic[i] << " ";
 };
 std::cout << std::endl << "Arithmetic Series = " << check_sum;
 std::cout << endl << "Number on the " << position << " position of an Arithmetic Progression = "  << index_arithmetic(position, start, step) << std::endl;
 
 //Geometric Progression
 std::cout << std::endl << "Geometric Progression: ";
 count = 1;
 for (int i = 1; i < geom_amount; i++) 
 {
     arr_geom[i] = arr_geom[i - 1] * ratio;
     count++;
 }
 for (int i = 0; i < count; i++)
 {
     geom_sum += arr_geom[i];
     std::cout << arr_geom[i] << " ";
 }
 std::cout << std::endl << "Geometric Series = " << geom_sum << std::endl;
  
 //Fibonacci sequence
 int f0 = 0;
 int f1 = 1;
 int bigger_than = 200;
 int i = 0;
 int next = 0;
 while (next < bigger_than)
 {
     next = f0 + f1;
     f0 = f1;
     f1 = next;
 }
 std::cout << std::endl << "The first Fibonacci number is greater than " << bigger_than << " = " << next << std::endl;

 int result = 1;
 int n = 5;
 factorial( 5, &result );
//  std::cout << std::endl << n << "! = " << result;
 std::cout << std::endl << n << "! = " << myFactorial(n);
 return 0;
}
