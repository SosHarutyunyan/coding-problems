#include <iostream>

int foo(std::string str)
{
    long a = 0;
   for (int i = 0; i < str.size(); ++i)
   {
        int b = 1 << (str[i] - 64);
        a = a^b;
   }
   return a;
}

int main ()
{
    std::string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaas";
    std::string str2 ="aaaaaasaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if (foo(str) == foo(str2))
    std::cout << true;

    else std::cout << false;
}