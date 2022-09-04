// Solution N1

struct node {
    node* next = nullptr;
    int val = 0;
};

node* intersect (node* A, node* B)
{
    if (A == B) {return A;}
    if (A) {intersect(A->next,B);}
    if(B) {intersect (A,B->next);}
}


// Solution N2

struct ListNode {
    node* next = nullptr;
    int val = 0;
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* a = headA;
        ListNode* b = headB;
        while (a != b)
        {
            if (a == nullptr)
            {
                a = headB;
            }
            else
            {
                a = a->next;
            }
            if (b == nullptr)
            {
                b = headA;
            }
            else
            {
                b = b->next;
            }
            
        }
        
      return a;
    }