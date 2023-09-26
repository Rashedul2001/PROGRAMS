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
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
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
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
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
int getLength(Node *head)
{

    int count{};
    while (head != nullptr)
    {
        count++;
        head = head->next;
    }
    return count;
}

// void intersect(Node *head1, Node *head2, int pos)// this will only work if one is smaller than other
// {

//     if (pos <= 0 || head1 == nullptr || head2 == nullptr)
//     {
//         return;
//     }
//     Node *temp1 = head1;
//     Node *temp2 = head2;
//     pos--;
//     while (pos && temp1->next != nullptr && temp2->next != nullptr)
//     {
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//         pos--;
//     }
//     if (temp1->next == nullptr)
//     {
//         temp1->next = temp2;
//         while (pos)
//         {
//             temp2 = temp2->next;
//             temp1->next = temp2;
//             pos--;
//         }
//     }
//     else
//     {
//         temp2->next = temp1;
//         while (pos)
//         {
//             temp1 = temp1->next;
//             temp2->next = temp1;
//             pos--;
//         }
//     }
// }

void intersect(Node *&head1, Node *&head2, int pos) // intersect node2 with node1
{

    Node *temp1 = head1;
    pos--;
    while (pos)
    {
        temp1 = temp1->next;
        pos--;
    }
    Node *temp2 = head2;
    while (temp2->next != nullptr)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int intersection(Node *head1, Node *head2)
{

    int len1 = getLength(head1);
    int len2 = getLength(head2);

    Node *ptr1, *ptr2;
    int diff;

    if (len1 > len2)
    {
        diff = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        diff = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (diff)
    {
        ptr1 = ptr1->next;
        diff--;
    }
    while (ptr1 != nullptr && ptr2 != nullptr)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    Node *head1 = nullptr;
    insertAtTail(head1, 5);
    insertAtHead(head1, 0);
    insertAtTail(head1, 10);
    insertAtTail(head1, 15);
    insertAtTail(head1, 20);
    insertAtTail(head1, 25);
    insertAtTail(head1, 30);
    insertAtTail(head1, 35);
    insertAtTail(head1, 40);

    Node *head2 = nullptr;
    insertAtTail(head2, 5);
    insertAtTail(head2, 10);
    insertAtTail(head2, 15);
    intersect(head1, head2, 5);
    display(head1);
    display(head2);
    std::cout << intersection(head1, head2);

    return 0;
}