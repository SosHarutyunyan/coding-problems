#include <iostream>

std::string compress (std::string&);

int main ()
{
    std::string str = "aaabbbabaaaaac";
    std::cout << compress(str) << std::endl;
}

std::string compress (std::string& str)
{
    std::string res;
    int count = 1;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == str[i+1])
        {
            count++;
        }
        else
        {
            res.push_back(str[i]);
            std::string s = std::to_string(count);
            res += s;
            count = 1;
        }

    }
    if (res.size() < str.size())
        return res;

    return str;
}
