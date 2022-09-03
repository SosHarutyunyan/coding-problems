#include <iostream>

std::string foo (std::string str)
{
    std::string res;
    std::string str2 = "%20";

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] != ' ')
        res.push_back(str[i]);

        else 
        res+=str2;
    }
return res;
}

int main()
{
    std::string str = "asd gdkd hdgjd bjdgdi";
    std::cout  << foo(str) << std::endl;
}