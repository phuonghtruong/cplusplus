#include<vector>
#include<string>

class FizzBuzz {
public:
    std::vector<std::string> fizzBuzz(int n)
    {
        std::vector<std::string> rst;

        for(int number = 1; number <= n; ++number)
        {
            if(number % 3 == 0 && number % 5 == 0)
            {
                rst.push_back("FizzBuzz");
            }
            else if (number % 3 == 0)
            {
                rst.push_back("Fizz");
            }
            else if (number % 5 == 0)
            {
                rst.push_back("Buzz");
            }
            else
            {
                rst.push_back(std::to_string(number));
            }
            
        }
        return rst;
    }
};
