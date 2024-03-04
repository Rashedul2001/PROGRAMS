#include <iostream>
#include <queue>

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
void printLevelOrder(Node *root)
{
    if (root == nullptr)
        return;

    std::queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != nullptr)
        {
            std::cout << node->data << " ";
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
            q.push(nullptr);
    }
}
int calculateHeight(const Node *root)
{
    if (root == nullptr)
        return 0;

    int left = calculateHeight(root->left);
    int right = calculateHeight(root->right);
    return std::max(left, right) + 1;
}
int calculateDiameter(const Node *root)
{
    if (root == nullptr)
        return 0;
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    int currentDiameter = leftHeight + rightHeight + 1;

    int leftDiameter = calculateDiameter(root->left);
    int rightDiameter = calculateDiameter(root->right);
    return std::max(currentDiameter, std::max(leftDiameter, rightDiameter));
}

void sumReplace(Node *root)
{
    if (root == nullptr)
        return;

    sumReplace(root->left);
    sumReplace(root->right);
    if (root->left != nullptr)
        root->data += root->left->data;
    if (root->right != nullptr)
        root->data += root->right->data;
}
void preOrder(Node *root)
{
    if (root == nullptr)
        return;
    std::cout << root->data << ' ';
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLevelOrder(root);
    std::cout << "\nHeight of the tree: " << calculateHeight(root) << std::endl;
    std::cout << "Diameter of the tree: " << calculateDiameter(root) << std::endl;

    std::cout << "PreOrder: ";
    preOrder(root);
    std::cout << std::endl;
    std::cout << "After SumReplace, PreOrder: ";
    sumReplace(root);
    preOrder(root);
    std::cout << std::endl;

    return 0;
}
