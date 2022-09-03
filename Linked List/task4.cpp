struct node {
    node* next = nullptr;
    node* prew = nullptr;
    int val = 0;
};



void sort_by_val (node*& head, int val)
{
    node* tmp2 = head;
    while(tmp2)
    {
        
        node* tmp = tmp2;
        if (tmp->val < val )
        {
            tmp->prew->next = tmp->next;
            tmp->next->prew = tmp->prew;
            tmp->next = head;
            head = tmp;
        }
        tmp2 = tmp2->next;
    }
}

