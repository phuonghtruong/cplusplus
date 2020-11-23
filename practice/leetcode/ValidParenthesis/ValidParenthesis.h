#include<iostream>
#include<stack>

class Solution {
public:
    bool isValid(std::string s)
    {
        std::stack<char> myStack;

        int strLength = s.length();
        if(strLength % 2 != 0 )
        {
            return false;
        }
        else
        {
            for(int index = 0; index < strLength; ++index)
            {              
                if(myStack.empty())
                {
                    myStack.push(s[index]);                    
                    continue;
                }
                else
                {
                    if( myStack.top() == ')' || myStack.top() == ']' ||
                        myStack.top() == '}')
                    {
                        return false;
                    }

                    if( (s[index] == ')' && myStack.top() == '(') ||
                        (s[index] == ']' && myStack.top() == '[') ||
                        (s[index] == '}' && myStack.top() == '{') ) 
                    {
                        myStack.pop();
                    }
                    else
                    {
                        myStack.push(s[index]);
                    }
                    
                }                
            }
            return myStack.empty() ? true : false;
        }
    }
};