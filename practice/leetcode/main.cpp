#include <iostream>
#include "AddTwoNumber.h"

class Node
{
public:
    int data;
    Node *next;
};

Node* create(int A[], int n)
{
    int i;
    Node* head;
    Node* last;

    head = new Node();
    head->data = A[0];
    head->next = NULL;
    last = head;
    
    for(i=1;i<n;++i)
    {
        Node* temp = new Node();
        temp->data = A[i];
        temp->next = NULL;
        last->next= temp;
        last = temp;
    }
    return head;
}

void Display(Node* p)
{
    // while(p != NULL)
    // {
    //     printf("%d ", p->data);
    //     p = p->next;
    // }

    if (p != NULL)
    {
        printf("%d ", p->data);
        Display(p->next);
    }
}
int main()
{
    Node* linkedlist;
    int A[] = { 3,5,7,10,15};

    linkedlist = create(A, 5);
    Display(linkedlist);
}