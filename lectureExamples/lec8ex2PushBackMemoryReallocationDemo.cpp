#include <iostream>
#include <vector>

void printv(const std::vector<int> & v)
{
    std::cout << "capacity = " << v.capacity() << "; size = " << v.size() << "; data " << v.data() << " = ";
    for (int i = 0; i < v.capacity(); i++) std::cout << *(v.data() + i) << " "; 
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 32; i++)
    {
        v.push_back(i * 2);
        printv(v);
    }
}