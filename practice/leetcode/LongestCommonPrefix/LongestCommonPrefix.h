#include<iostream>
#include<string>
#include<vector>

class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs)
    {
        std::string result = "";
        int sizeVector = 0;
        int sizeFirstStr = 0;

        if(strs.size() == 0)
        {
            return result;
        }
        else
        {
            sizeVector = strs.size();
            sizeFirstStr = strs[0].size();
        }
        
        for(int i = 0; i < sizeFirstStr; ++i)
        {
            for(int j = 1; j < sizeVector; ++j)
            {
                if(strs[0][i] != strs[j][i] || i >= strs[j].size())
                {
                    return result;
                }         
            }
            result += strs[0][i];
        }
        return result;
    }
};