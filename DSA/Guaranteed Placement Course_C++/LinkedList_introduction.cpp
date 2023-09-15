#include <iostream>

class Node
{
public:
    int value;
    Node *next;

    // constructor

    Node(int val) : value{val}, next{nullptr} {}
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
    temp->next = n; // this will set the location for the created node to "the next Node pointer" of earlier node
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
        std::cout << temp->value << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}
bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->value == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
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

    std::cout << std::boolalpha << search(linkedList1, 10);

    return 0;
}