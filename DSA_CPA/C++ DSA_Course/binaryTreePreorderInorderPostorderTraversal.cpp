#include <iostream>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(struct Node *root)
{
    if (root == nullptr)
        return;
    std::cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inOrder(struct Node *root)
{
    if (root == nullptr)
        return;
    inOrder(root->left);
    std::cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(struct Node *root)
{
    if (root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout << root->data << " ";
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
    std::cout << "PreOrder: ";
    preorder(root);
    std::cout << std::endl;
    std::cout << "InOrder: ";
    inOrder(root);
    std::cout << std::endl;
    std::cout << "PostOrder: ";
    postOrder(root);

    return 0;

} //
