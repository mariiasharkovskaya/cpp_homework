#include <iostream>

class A {
public:
    A() :
        b(5),
        a(b),
        str(nullptr)
    {
        std::cout << "Constructor A()" << std::endl;
    }

    A(int aa, int bb, const char *s) :
        b(bb),
        a(aa)
    {
        str = new char [strlen(s) + 1];
        strcpy(str, s);
        std::cout << "Constructor A(" << aa << ", " << bb << "); " << std::endl;
    }

    A(const A & src)
    {
        a = src.a;
        b = src.b;
        if (src.str) {
            str = new char [strlen(src.str) + 1];
            strcpy(str, src.str);
        } else str = nullptr;
        std::cout << "Copy constructor A(" << a << ", " << b << "); " << std::endl;
    }

    virtual ~A()
    {
        std::cout << "Destructor ~A()" << std::endl;
        if (str) delete [] str;
    }
    void print(void)
    {
        std::cout << &a << " a = " << a << "; " << &b << " b = " << b;
        if (str) std::cout << "; str = " << str;
        std::cout << std::endl;
    }
private:
    int a;
    int b;
    char *str;
};

int main()
{
    A a,
    a2 = {3, 4, "str2"},
    a3 = a;
    //a2(3, 4);

    std::cout << &a <<  "; " << &a2 << "; " << &a3 << std::endl;

    a.print();
    a2.print();
    a3.print();
}
