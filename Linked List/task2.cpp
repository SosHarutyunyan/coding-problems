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
        head->prew = nullptr;
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

void print_kth (node* head, int k)
{
    node* tmp = head;
    while (k--)
    {
        tmp = tmp->next;
    }
    node* tmp2 = head;
    while (tmp)
    {
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    std::cout << tmp2->val;
}

int main ()
{
    node* head = nullptr;
    add(head,1);
    add(head,1);
    add(head,1);
    add(head,7);
    add(head,5);
    add(head,8);
    add(head,1);
    print_kth(head,4);





}