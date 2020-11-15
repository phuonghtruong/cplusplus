#include <iostream>
#include <string>
#include <vector>

template <typename T>
T maxof (const T &a, const T &b)
{
    return (a > b) ? a : b;
}

template<typename T>
constexpr T pi = T(3.1415926535897932385L);

template <typename T>
T area_of_circle(const T &r)
{
    return r * r * pi<T>;
}

template<typename T>
void printv(const std::vector<T> &v)
{
    if(v.empty()) return;
    for(const T &i : v) std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    int a = 7;
    int b = 9;

    std::cout << "max is " << maxof<int>(a,b) << std::endl;

    std::cout.precision(20);
    std::cout << pi<long double> << " " << area_of_circle<long double>(3) << std::endl;

    std::vector<int> v1 = {1,2,3,4,5};
    printv<int>(v1);
    return 0;
}