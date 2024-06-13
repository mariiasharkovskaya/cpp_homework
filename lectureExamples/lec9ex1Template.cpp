#include <iostream>

template <class T=int, int ID = 0>
class A{
    public:
    
    A(const T &val) : mValue(val) {}
    
    void print(void)
    {
        std::cout << "Value = " << mValue << "; ID = " << ID << std::endl;
    }
    
    private:
    T mValue;
};

int main()
{
    A<std::string, 1> a1 = std::string("Hello");
    A<> a2=4;
    a1.print();
    a2.print();
}