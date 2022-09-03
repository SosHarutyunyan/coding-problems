#include <iostream>

struct node {
    node* next = nullptr;
    node* prew = nullptr;
    int val = 0;
};

void add (node*& head, int m_val)
{
    if (!head)
    {
        head = new node;
        head -> val = m_val;
        head->next = nullptr;
        return;
        
    }

    node* tmp = head;

    while (tmp->next)
    {
        tmp = tmp -> next;
    }
    node* tmp2 = new node;
    tmp ->next = tmp2;
    tmp2 -> prew = tmp;
    tmp2->val = m_val;
    tmp2 -> next = nullptr; 
    
}

void print (node* head)
{
    node* tmp = head;
    while (tmp)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int convert_to_int (node*& head)
{
    int res = 0;
    node* tmp = head;
    while (tmp)
    {
        res = res *10 + tmp->val;
        tmp = tmp->next;
    }

    return res;
}

void convert_to_list (node*& head, int x)
{
    while (x)
    {
        add(head, x%10);
        x /= 10;
    }
}

int rotate_int (int x)
{
    int res = 0;
    while(x)
    {
        res = res*10 + x%10;
        x /= 10;
    }
    return res;
}

node* add(node* head1, node* head2)
{
    node * head;
    int a = rotate_int(convert_to_int(head1));
    int b = rotate_int(convert_to_int(head2));
    int c = a + b;
    convert_to_list(head,c);
    return head;


}

