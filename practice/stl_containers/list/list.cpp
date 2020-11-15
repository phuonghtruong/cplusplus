#include<iostream>
#include<list>

template<typename T>
void printl(std::list<T> &l)
{
    if(l.empty()) return;
    for(T &i: l) std::cout << i << " ";
    std::cout << std::endl;
}

// print a simple message
void message(const char *s) { std::cout << s << std::endl;}
void message(const char *s, const int n) { std::cout << s << ": " << n << std::endl;}

int main()
{
    std::list<int> l1 = {1, 2, 3,4,5,6,7,8,9,10};
    printl(l1);
    message("size", (int) l1.size());
    message("front", l1.front());
    message("back", l1.back());

    message("push back 47");
    l1.push_back(47);
    printl(l1);

    // need an iterator to insert and erase
    message("insert:");
    std::list<int>::iterator it1 = l1.begin();
    while((*++it1 != 5) && (it1 != l1.end()));

    if(it1 != l1.end())
    {
        message("insert 112 before 5");
        l1.insert(it1, 112);
    }
    printl(l1);

    // find element value 7
    while((*++it1 != 7) && (it1 != l1.end()));
    if (it1 != l1.end())
    {
        message("erase ")
    }
}