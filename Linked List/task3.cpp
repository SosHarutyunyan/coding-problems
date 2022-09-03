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

void delete_middle_simbol (node* head)
{
    node* tmp = head;
    int count = 0;
    while(tmp)
    {
        ++count;
        tmp = tmp->next;
    }
    count /= 2;
    tmp = head;
    while (count--)
    {
        tmp = tmp->next;
    }

    tmp->prew->next = tmp->next;
    tmp->next->prew = tmp->prew;
    delete tmp;

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
    delete_middle_simbol(head);
    print(head);


}