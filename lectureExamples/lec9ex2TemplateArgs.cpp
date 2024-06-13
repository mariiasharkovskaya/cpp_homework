#include <iostream>
#include <string>

template <typename T>
void func(T & t)
{
    std::cout << "void fun(T t)" << t << std::endl;
}

template <typename T, typename... Args>
void func(T t, Args... args)
{
    func(t);
    
    func(args...);
}

template <>
void func<int>(int &t)
{
    std::cout << "void func<int>(int t)" << t << std::endl;
}

template <>
void func<double>(double &t)
{
    std::cout << "void func<double>(double t)" << t << std::endl;
}

template <>
void func<const char *>(const char * &t)
{
    std::cout << "void func<char>(char t)" << t << std::endl;
}

template <>
void func<std::string>(std::string &t)
{
    std::cout << "void func<string>(string t)" << t << std::endl;
}

int main()
{
    func(1, 1.1, "Hello world", std::string("Again hello!"));
}