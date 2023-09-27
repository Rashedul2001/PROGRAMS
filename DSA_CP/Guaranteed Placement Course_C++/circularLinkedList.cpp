#include <iostream>
class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data{data}, next{nullptr} {}
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, int data)
{
    if (head == nullptr)
    {
        insertAtHead(head, data);
        return;
    }

    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void display(Node *head)
{
    Node *temp = head;
    do
    {
        std::cout << temp->data << "->";
        temp = temp->next;

    } while (temp != head);
    std::cout << std::endl;
}

void deleteHead(Node *&head)
{
    if (head == nullptr && head->next == head)
    {
        head = nullptr;
        return;
    }
    Node *temp = head, *toDelete = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deleteNode(Node *&head, int pos)
{
    if (pos <= 1 || head == nullptr)
    {
        deleteHead(head);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < pos - 1) // we want to place our temp pointer before position indicating node so that we can delete node after it and modify it's next
    {
        temp = temp->next;
        count++;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
}

int main()
{

    Node *list1 = nullptr;
    insertAtTail(list1, 5);
    insertAtTail(list1, 10);
    insertAtTail(list1, 15);
    insertAtTail(list1, 20);
    insertAtTail(list1, 25);
    insertAtHead(list1, 0);
    display(list1);
    deleteNode(list1, 10);
    display(list1);

    return 0;
}