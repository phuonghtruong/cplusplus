#include <iostream>
#include <vector>
#include <string>

template<typename T>
void printv(const std::vector<T> &v)
{
    if(v.empty()) return;
    for(const T &i : v) std::cout << i << " ";
    std::cout << std::endl;
}

void message(const char *s) {std::cout << s << std::endl;}
void message(const char *s, const int n) { std::cout << s << ": " << n << std::endl;}

int main()
{
    std::cout << "vector from initializer list: "<< std::endl;
    std::vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    printv(v1);

    // info
    message("size", (int)v1.size());
    message("front", v1.front());
    message("back", v1.back());

    // index
    message("element at 5", v1[5]);
    message("element at 5", v1.at(5));

    // insert
    message("insert 42 at begin + 5:");
    v1.insert(v1.begin() + 5, 42);
    printv(v1);

    // erase - remove the element at the specific index
    message("erase at begin + 5:");
    v1.erase(v1.begin() + 5);
    printv(v1);

    // push back - insert at the end of vector
    message("push back 47: ");
    v1.push_back(47);
    printv(v1);

    // pop_back - remove the last element of vector
    message("pop_back:");
    v1.pop_back();
    printv(v1);

    // empty
    message("empty:");
    std::vector<int> vx = {1, 2, 3};
    while(!vx.empty())
    {
        printv(vx);
        vx.pop_back();
    }

    // clear
    message("clear:");
    vx.insert(vx.begin(), {1,2,3,4,5});
    printv(vx);

    message("vx size", (int) vx.size());
    message("vx.clear()");
    vx.clear();
    message("vx size", (int) vx.size());
    printv(vx);

    

}