#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main()
{
    std::string str = "Hello world!";
    std::map<char, int> m1;

    std::cout << "[IN]\n" << str << "\n";

    for (auto i = str.begin(); i != str.end(); i++) {
        m1[*i]++;
    }
    //std::sort(m1.begin(), m1.end(), [](std::pair<char,int>  const& a, std::pair<char,int> const& b)->bool {return a.second > b.second;}); 
    std::vector<std::pair<char, int>> v1;
    for (auto i = m1.begin(); i != m1.end(); i++) {
        v1.push_back(*i);
    }

    std::sort(v1.begin(), v1.end(), [](std::pair<char, int> const& a, std::pair<char, int> const& b)->bool {return a.second > b.second; });
    std::cout << "[OUT]\n";
    for (auto i = v1.begin(); i != v1.end(); i++) {
        std::cout << ((std::pair<char, int>) * i).first << " " << ((std::pair<char, int>) * i).second << "\n";
    }

}
