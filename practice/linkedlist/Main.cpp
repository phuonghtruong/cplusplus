#include <iostream>

struct Node
{
    int data;
    Node *link;
};

typedef Node* nodePtr;

int main()
{
    nodePtr headNode;
    // head = headNode;
    headNode->data = 20;
    headNode->link = NULL;
    std::cout << headNode->data << std::endl;
}