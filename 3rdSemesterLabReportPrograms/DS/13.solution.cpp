#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data{val}, next{nullptr} {}
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insertData(Node *&head, int data)
{
    if (head == nullptr)
    {
        insertAtHead(head, data);
        return;
    }
    Node *newNode = new Node(data);
    Node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

void display(Node *head)
{
    while (head != nullptr)
    {
        std::cout << head->data << "->";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}
void deleteData(Node *head, int data)
{
    if (head == nullptr)
    {
        std::cerr << "The Linked List is empty" << std::endl;
        return;
    }
    Node *toDelete = nullptr;
    if (head->data == data)
    {
        toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    while (head->next != nullptr and head->next->data != data)
    {
        head = head->next;
    }
    if (head->next == nullptr)
    {
        std::cerr << "The Data is not present in the Linked List" << std::endl;
        return;
    }
    toDelete = head->next;
    head->next = head->next->next;
    delete toDelete;
    toDelete = nullptr;
}

int main()
{
    Node *head = nullptr;
    insertData(head, 20);
    insertData(head, 30);
    insertData(head, 40);
    std::cout << "After inserting Data:" << std::endl;
    display(head);
    insertAtHead(head, 10);
    std::cout << "After inserting data at head" << std::endl;
    display(head);
    deleteData(head, 30);
    std::cout << "After deleting Node with value 30:" << std::endl;
    display(head);
    return 0;
}
