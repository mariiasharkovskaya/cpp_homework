#include <iostream>
#include <vector>

void minmax_v(std::vector<int> v)
{
    int min = v[0];
    int max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
        else if (v[i] > max)
        {
            max = v[i];
        }
    }
    std::cout << "max = " << max << std::endl << "min = " << min << std::endl;
}

std::vector <int> bubble_sort(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - 1; j++)
        {
            int previous = v[j];
            int next = v[j + 1];
            // std::cout << "previous = " << previous << " next = " << next << std::endl;
            if (previous > next)
            {
                std::swap(v[j], v[j+1]);
            }
            // std::cout << "Swapped: v[" << j << "] = " << v[j] << " v[" << j + 1 << "] = " << v[j + 1] << std::endl;
        }
    }
    return v;
}

int main()
{
    std::vector<int> v = { 1, 2, 3, -2, -7, -1, 4, 5, 6, 7, 1, 11, 122, 2, 3, 5, 88, 6 };
    int size_v = v.size();
    minmax_v(v);
    std::cout << "v: ";
    for(int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::vector<int> sorted_v = bubble_sort(v);
    std::cout << "sorted v: ";
    for(int i = 0; i < sorted_v.size(); i++)
    {
        std::cout << sorted_v[i] << " ";
    }
    return 0;
}