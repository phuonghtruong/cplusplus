#include <limits>

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int remains = 0;
        const int MIN_INT = std::numeric_limits<int>::min(); // minimum value
        const int MAX_INT = std::numeric_limits<int>::max();
        if(x >= MAX_INT || x < MIN_INT)
        {
            return 0;
        }
        do
        {
            if(result > MAX_INT / 10 || result < MIN_INT / 10)
            {
                return 0;
            }
            remains = x % 10;
            result = result * 10 + remains;            
            x = x / 10;
        }while(x != 0);
        return result;
    }
};