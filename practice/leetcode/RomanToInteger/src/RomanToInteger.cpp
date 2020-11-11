#include "../include/RomanToInteger.h"

int RomanToInteger(std::string s)
{
    int value;
    int index = 0;
    int result = 0;
    while(s[index] != NULL)
    {
        std::cout << s[index] << std::endl;
        value = RomanToInteger_MapTable(s[index]);
        if(index != 0)
        {
            if(s[index] == 'V' || s[index] == 'X')
            {
                if(s[index - 1] == 'I')
                {
                    value -= 2;
                }
            }

            if(s[index] == 'L' || s[index] == 'C')
            {
                if(s[index - 1] == 'X')
                {
                    value -= 20;
                }
            }

            if(s[index] == 'D' || s[index] == 'M')
            {
                if(s[index - 1] == 'C')
                {
                    value -= 200;
                }
            }
        }
        result += value;
        index++;         
    }
    return result;
}

int RomanToInteger_MapTable(char c)
{
    int value = 0;
    switch (c)
    {
        case 'I':
            value = 1;
            break;
        case 'V':
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
            break;
        case 'M':
            value = 1000;
            break;
        default:
            std::cout << "Invalid character!!!";
            break;
    }
    return value;
}