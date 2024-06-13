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
    v.push_back(1);
    std::cout << v[0] << std::endl;
    printv(v);
    v.reserve(10);
    printv(v);
    v.reserve(20);
    printv(v);
}