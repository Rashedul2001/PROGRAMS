#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int val) : data{val}, next{nullptr} {}
};
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val); // we are using pointer to create node named n because if we don't the created node will
    // go out of scope and deleted. we created a node dynamically and n pointer points to it and the created new Node will never
    // vanish until program terminates
    if (head == nullptr)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n; // this will set the location of the created node to "the next Node pointer" of earlier node
}
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}
void search(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            std::cout << "The Data is present in the LinkedList" << std::endl;
            return;
        }
        temp = temp->next;
    }
    std::cout << "The Data is not present in the LinkedList" << std::endl;
}
void deleteNodeWithVal(Node *&head, int val)
{
    if (head == nullptr)
    {
        std::cerr << "Node is empty" << std::endl;
        return;
    }
    if (head->data == val)
    {
        Node *toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != val) // we are doing this because we want to delete the node containing the val so we should be on the Node
    // we used temp->next != nullptr because the data can be not present in the list
    // and remember the condition for checking if the next node is nullptr or not has to be the first condition to check
    // or else it will do undefined behavior
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        std::cerr << "Can't delete.....The data is not present in te LinkedList" << std::endl;
        return;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

Node *reverseViaIterating(Node *&head)
{

    Node *prevPtr = nullptr;
    Node *currPtr = head;
    Node *nextPtr;

    while (currPtr != nullptr)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}
Node *reverseViaRecursion(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *newHead = reverseViaRecursion(head->next); // after doing this we are not at the last node but the node before last
    // so
    head->next->next = head;
    head->next = nullptr;

    return newHead;

    // after doing this when we go back
    // recursively it will land on the earlier node which will be the head if there is one
}

int main()
{

    Node *linkedList1 = nullptr;
    insertAtTail(linkedList1, 5);
    insertAtTail(linkedList1, 10);
    insertAtTail(linkedList1, 15);
    insertAtTail(linkedList1, 20);
    display(linkedList1);
    insertAtHead(linkedList1, 0);
    insertAtHead(linkedList1, -5);
    display(linkedList1);

    search(linkedList1, 20);

    deleteNodeWithVal(linkedList1, 15);
    display(linkedList1);
    deleteNodeWithVal(linkedList1, 50);
    deleteNodeWithVal(linkedList1, -5);
    display(linkedList1);

    linkedList1 = reverseViaIterating(linkedList1);
    display(linkedList1);

    linkedList1 = reverseViaRecursion(linkedList1);
    display(linkedList1);

    return 0;
}