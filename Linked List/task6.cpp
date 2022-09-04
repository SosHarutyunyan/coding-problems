#include <iostream>
#include <string>
#include <algorithm>

struct node {
    node* next = nullptr;
    int val = 0;
};

bool is_polindrome (node* head)
{
    std::string str;
    node* tmp = head;

    while(tmp)
    {
        str.push_back(tmp->val);
        tmp = tmp->next;

    }
    std::string str2 = str;
    std::reverse(str2.begin(), str2.end());
    if (str == str2)
    {
        return true;
    }

    return false;
}