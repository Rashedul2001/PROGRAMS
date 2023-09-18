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
bool detectCycle(Node *head);
void display(Node *head)
{
    if (detectCycle(head))
    {
        std::cout << "Can't print it's a cycle LinkedList" << std::endl;
        return;
    }
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

Node *reverseK_node(Node *&head, int k)
{
    Node *prevPtr = nullptr;
    Node *currPtr = head;
    Node *nextPtr;

    int count = 0;
    while (currPtr != nullptr && count < k)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }
    if (currPtr != nullptr)
    {
        head->next = reverseK_node(nextPtr, k);
    }

    return prevPtr;
}

bool detectCycle(Node *head)
{
    Node *slowPtr = head;
    Node *fastPtr = head;
    while (fastPtr != nullptr && fastPtr->next != nullptr)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if (fastPtr == slowPtr)
        {
            // std::cout << "The Value:" << fastPtr->data << std::endl;
            return true;
        }
    }
    return false;
}

void makeCycle(Node *&head, int pos)
{
    Node *temp = head;
    Node *repetitionNode;
    int count = 1;
    while (temp->next != nullptr)
    {
        if (count == pos)
        {
            repetitionNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = repetitionNode;
}

void removeCycle(Node *&head)
{
    Node *fastPtr = head;
    Node *slowPtr = head;
    Node *prevPtr = nullptr;

    do
    {
        prevPtr = slowPtr;
        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;

    } while (fastPtr != nullptr && fastPtr->next != nullptr && fastPtr != slowPtr);
    // if there is no prevPtr and the additional if(slowPtr->next==nullptr)
    //  this will not work if the fastPtr and the slowPtr are both at the head like 1, 2 3,then again 1 for this it won't work

    if (fastPtr == nullptr || fastPtr->next == nullptr)
    {
        std::cout << "the LinkedList is not Cycle LinkedList" << std::endl;
        return;
    }
    if (slowPtr == head)
    {
        prevPtr->next = nullptr;
        return;
    }

    fastPtr = head;
    while (fastPtr->next != slowPtr->next)
    {
        fastPtr = fastPtr->next;
        slowPtr = slowPtr->next;
    }
    slowPtr->next = nullptr;
}

int main()
{

    Node *linkedList1 = nullptr;
    std::cout << "Inserting At Tail..." << std::endl;
    insertAtTail(linkedList1, 5);
    insertAtTail(linkedList1, 10);
    insertAtTail(linkedList1, 15);
    insertAtTail(linkedList1, 20);
    display(linkedList1);
    std::cout << "Inserting At Head..." << std::endl;
    insertAtHead(linkedList1, 0);
    insertAtHead(linkedList1, -5);
    display(linkedList1);
    std::cout << "Searching 20 in the Linked List..." << std::endl;
    search(linkedList1, 20);
    std::cout << "Deleting Node with value 15..." << std::endl;
    deleteNodeWithVal(linkedList1, 15);
    display(linkedList1);
    std::cout << "Deleting Node with value 50. Which doesn't exist..." << std::endl;
    deleteNodeWithVal(linkedList1, 50);
    display(linkedList1);
    std::cout << "reversing The Linked List by Iteration Method..." << std::endl;
    linkedList1 = reverseViaIterating(linkedList1);
    display(linkedList1);
    std::cout << "reversing The Linked List by Recursion Method..." << std::endl;
    linkedList1 = reverseViaRecursion(linkedList1);
    display(linkedList1);
    std::cout << "Reversing K-Nodes in the Linked List. Where K =2... " << std::endl;
    linkedList1 = reverseK_node(linkedList1, 2);
    display(linkedList1);

    Node *cycleLinkedList = nullptr;
    insertAtTail(cycleLinkedList, 5);
    insertAtTail(cycleLinkedList, 10);
    insertAtTail(cycleLinkedList, 6);
    insertAtTail(cycleLinkedList, 25);
    insertAtTail(cycleLinkedList, 2);
    insertAtTail(cycleLinkedList, 9);
    insertAtTail(cycleLinkedList, 40);
    insertAtTail(cycleLinkedList, 55);
    std::cout << "The LinkedList before making it Cycle LinkedList: " << std::endl;
    display(cycleLinkedList);
    makeCycle(cycleLinkedList, 1);
    std::cout << "Detecting Cycle LinkedList" << std::endl;
    std::cout << (detectCycle(cycleLinkedList) ? ("The linked List forms a cycle") : ("The linked List doesn't form a cycle")) << std::endl;

    removeCycle(cycleLinkedList);
    display(cycleLinkedList);

    return 0;
}