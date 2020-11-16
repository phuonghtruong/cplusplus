#include<iostream>
#include <string>


class Solution{
public:
    int firstUniqChar(std::string s){
        int index;
        bool repeat = false;
        for(index = 0; index < s.length(); ++index)
        {
            repeat = false;
            for(int j = 0; j < s.length(); ++j)
            {
                if(s[index] == s[j] && index != j)
                {
                    std::cout << std::endl;
                    std::cout << "index = " << index << std::endl;
                    std::cout << "s["<<index<<"] = " << s[index] << std::endl;
                    std::cout << "s["<<j<<"] = " << s[j] << std::endl;                    
                    repeat = true;
                    std::cout << "repeat = " << repeat << std::endl;
                     
                    break;
                }
            }
            if(!repeat) return index;
        }
        return -1;
    }

    // TODO : Try to use hashmap or pair array
    int firstUniqCha_hashmap(std::string s){
    
        return 0;
    }

    int firstUniqCha_pairarray(std::string s){
    
        return 0;
    }
};