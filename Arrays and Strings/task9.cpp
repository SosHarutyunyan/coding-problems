#include <iostream>
#include <string>

bool isSubstringwhich (std::string str, std::string str2)
{
    if (!str.size() && !str2.size())
    {
        return true;
    }
    if (str.size() < str2.size() || str.size() > str2.size())
    {
        return false;
    }

    int k = 0;
    while (k < str.size())
    {
       for (int i = 0; i < str.size(); ++i)
       {
        for (int j = k; j < str2.size() + k; ++j)
        {
            if (str[i] != str[k])
            {
                k += 1;
                str2.push_back(str[k-1]);
                break;
            }
        }
       } 
       return true;
    }
    return false;
}

int main()
{
    std::string str = "waterbottle";
    std::string str2 = "erbottlewat";
    std::cout << isSubstringwhich(str,str2) << std::endl;
}