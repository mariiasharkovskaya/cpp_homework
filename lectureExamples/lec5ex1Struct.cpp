#include <iostream>

class A {
public:
  int a;
};

// #pragma pack(1)
struct B {
    int b;
    char c;
    char c1;
    int d;
    // int32_t b;
    // int8_t c;
    // int32_t d;
};

int main()
{
    A a;
    B b;

    a.a = 5;

    std::cout << &b.b << "; " << (int *)&b.c << "; " << &b.d << std::endl;

    uint8_t data[] = {0xff, 0x34, 0x55, 0x33, 0x88, 0x11, 0x22, 0x44, 0x00, 0x77, 0xaa};
    B *pB = reinterpret_cast<B*>(data);

    std::cout << std::hex << pB->b << "; " << (int)pB->c << "; " << (int)pB->c1 << "; " << pB->d << std::endl;
}
