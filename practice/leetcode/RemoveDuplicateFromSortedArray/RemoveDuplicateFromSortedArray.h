#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::set<int> mySet;
        for(int index = 0; index < nums.size(); ++index)
        {
            std::cout << "index: " << index << "\tnum: " << nums[index] << std::endl;
            if(mySet.empty())
            {
                mySet.insert(nums[index]);
                continue;
            } 
            
            if(mySet.find(nums[index]) == mySet.end())
            {
                mySet.insert(nums[index]);
            }
            else
            {
                std::cout << "number to erase is: " << nums[index] << std::endl;
                nums.erase(nums.begin() + index);
                index--;
            }
            std::cout << std::endl;     
        }
        for (int num : nums) 
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        return nums.size();
    }
};