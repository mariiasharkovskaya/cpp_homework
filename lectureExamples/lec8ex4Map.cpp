#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

int main()
{
  std::unordered_map <std::string, std::vector<std::string> > m;
  std::vector<std::string> v1 = {"Hello", "world"};
  std::vector<std::string> v2 = {"aaa", "bbb", "ccc"};
  std::vector<std::string> v3 = {"111"};
  m["hello"] = v1;;
  m["abc"] = v2;
  m["number"] = v3;

  auto item = m.find("Hello");
  if (item != m.end()) std::cout << "Found first element = " << item->second[0] << " " << item->second[1] << std::endl << "Key = " << item->first << std::endl;

  std::cout << "abc second = " << m["abc"][2] << std::endl;
  
  for (const auto &mm : m) std::cout << mm.first << std::endl;
}
