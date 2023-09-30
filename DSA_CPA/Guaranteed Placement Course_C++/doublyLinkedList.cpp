#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node *previous;

    Node(int data) : data{data}, next{nullptr}, previous{nullptr} {}
};
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;

    if (head != nullptr)
        head->previous = newNode;

    head = newNode;
}
void insertAtTail(Node *&head, int data)
{
    if (head == nullptr)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    Node *newNode = new Node(data);
    while (temp->next != nullptr)
    {

        temp = temp->next;
    }
    temp->next = newNode;
    newNode->previous = temp;
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
void deleteAtHead(Node *&head)
{
    Node *toDelete = head;
    head = head->next;
    head->previous = nullptr;
    delete toDelete;
}

void deleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);

        return;
    }
    Node *temp = head;
    int count = 1;
    while (temp != nullptr && count < pos)
    {
        temp = temp->next;
        count++;
    }
    temp->previous->next = temp->next;

    if (temp->next != nullptr)
    {
        temp->next->previous = temp->previous;
    }
    delete temp;
}

int main()
{
    Node *head = nullptr;
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);

    display(head);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    display(head);
    deleteNode(head, 4);

    display(head);
    deleteAtHead(head);
    display(head);

    return 0;
}