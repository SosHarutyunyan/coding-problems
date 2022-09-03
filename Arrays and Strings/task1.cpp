#include <iostream>
bool unique(std::string str)
{
    for (int i = 0; i < str.size() - 1; ++i)
    {
        for (int j = i+1; j < str.size(); ++j)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main ()
{
    std::string str = "asdfgha";
    std::cout << unique(str);
}