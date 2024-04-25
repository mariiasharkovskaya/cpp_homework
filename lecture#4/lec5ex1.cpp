#include <iostream>
#include <array>
#include <stdint.h>

#pragma pack(1)
class A 
{
    public: 
    int a;
    int b;
};

struct B 
{
    int32_t b;
    int8_t c;
    int32_t d;
};

int main() 
{
    A a; 
    B b;
    a.a = 5;
    a.b = 10;
    b.c = 3;
    b.d = 4;
    std::cout << &b.b << "; " << std::endl << (int *)&b.c << "; " << &b.d << "; " << std::endl << &a.a << "; " << &a.b << std::endl;
}
