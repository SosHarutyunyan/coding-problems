struct node {
    node* next = nullptr;
    int val = 0;
};

node* loop (node* head)
{
    node* fast = head->next;;
    node* slow = head;

    while (fast != slow)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    node* tmp = slow;
    fast = tmp->next;

    while (fast != slow)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
}