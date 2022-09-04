#include <iostream>
#include <string>

bool isSubstringwhich (std::string str, std::string str2)
{
    int size = str.size();
    int i = 1;

    while (size)
    {
        if (str == str2)
        {
            return true;
        }
        str2 = str2.substr(1) + str2[0];
        --size;
    }
    return false;

}

int main()
{
    std::string str = "waterbottle";
    std::string str2 ="erbottlewat";
    std::cout << isSubstringwhich(str,str2) << std::endl;
}










// if (!str.size() && !str2.size())
    // {
    //     return true;
    // }
    // if (str.size() < str2.size() || str.size() > str2.size())
    // {
    //     return false;
    // }

    // int k = 0;
    // while (k < str.size())
    // {
    //     int i = 0;
    //    for (;i < str.size(); ++i)
    //    {
        
    //         if (str[i] != str[i+k])
    //         {
    //             str2.push_back(str[k]);
    //             break;
    //         }
    //     }
    //     if (i == str.size() - 1)
    //     {
    //     return true;
    //     }
    //     k += 1;
    // }
    // return false;