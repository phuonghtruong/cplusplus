#include <iostream>

int main()
{
    int a = 10;
    int b = 5;

    [](){std::cout << "Hello world" << std::endl;}();

    // Pass some parameters
    [](int x, int y){std::cout << "sum: " << x + y << std::endl;}(10,5);

    // return value
    std::cout << ([](int x, int y){return x + y;}(10,9));
    int a =[](int x, int y){return x + y;}(10,9);
    int b =[](int x, int y)->int{return x + y;}(10,9);  // mention return type ->int
    std::cout << "b = " << x << std::endl;

    int a1 = 10;
    [a1](){std::cout << a1 << std::endl;}();  // put a1 in [], so it can pass to lambda expression
    auto f = [a1](){std::cout << a1 << std::endl;}();
    f();


    return 0;
}