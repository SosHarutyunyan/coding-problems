#include <iostream>

bool is_edit(std::string& str, std::string& str2)
{
    
    if (abs(str.size()-str2.size()) > 1)
        return false;

    // if (str == str2)
    //     return true;

    int count = 2;
    int i = 0;
    int j = 0;

    if (str.size() < str2.size())
    {
        while (i != str.size() - 1)
        {
            if (str[i] != str2[j])
            {
                count --;
                --i;
            }
            if (count == 0)
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }

    i = 0;
    j = 0;
    count = 2;

    if (str2.size() < str.size())
    {
        while (i != str2.size() - 1)
        {
            if (str2[i] != str[j])
            {
                count --;
                --i;
            }
            if (count == 0)
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }

    i = 0;
    count = 2;
    if (true)
    {
    while (i != str.size() - 1)
    {
        if (str[i] != str2[i])
        {
            count--;
        }
        if (count == 0)
        {
            return false;
        }
        i++;
    }
    return true;
    }
    

    return false;
}

int main()
{
    std::string str = "aaaae";
    std::string str2 = "aaaar";
    std::cout << is_edit (str, str2);
}