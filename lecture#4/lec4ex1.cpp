#include <iostream>
#include <array>

class someClass 
{
    public:
    someClass(void) 
    {
        std::cout << "Constructor" << std::endl;
    }
    someClass(const someClass &) 
    {
        std::cout << "Copy constructor" << std::endl;
    }
    void print(void) const
    {
        std::cout << "print" << std::endl;
    }
    int member;
};

inline int someMethod(int a, int b, const someClass &ccc)
// inline int someMethod(int a, int b, const someClass ccc)
// int someMethod(int &a, int &b)
{
    int c;
    int d;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    std::cout << "&a = " << &a << " &b = " << &b << std::endl;
    std::cout << "&c = " << &c << "; &d = " << &d << std::endl;
    ccc.print();
    std::cout << std::dec << ccc.member << std::endl;
    return 0;
}

int main() 
{
    someClass ddd;
    ddd.member = 10;
    int *pA = new int();
    int *pB = new int();
    std::cout << std::hex << "pA = " << pA << "; pB = " << pB << std::endl;
    *pA = 5;
    *pB = 6;
    auto res = someMethod(*pA, *pB, ddd);
}