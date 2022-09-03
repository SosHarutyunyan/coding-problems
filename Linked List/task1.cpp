struct node {
    node* next = nullptr;
    node* prew = nullptr;
    int val = 0;
};

void foo (node*& head)
{
    node* tmp = head;
    while (tmp->next)
    {
        node* tmp2 = tmp->next;
        while (tmp2)
        {
            if (tmp->val == tmp2->val)
            {
                tmp2->prew->next = tmp2->next;
                node* tmp3 = tmp2;
                tmp2 = tmp2->next;
                delete tmp3;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;       
    }
}
