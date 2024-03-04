#include <iostream>

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) : data{data}, left{nullptr}, right{nullptr} {}
};
int search(int inorder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;
    if (start > end)
    {
        return nullptr;
    }
    int val = postorder[idx];
    idx--;
    Node *curr = new Node(val);
    if (start == end)
        return curr;
    int pos = search(inorder, start, end, val);
    curr->right = buildTree(postorder, inorder, pos + 1, end);
    curr->left = buildTree(postorder, inorder, start, pos - 1);

    return curr;
}
void printInorder(Node *root)
{
    if (root == nullptr)
        return;

    printInorder(root->left);
    std::cout << root->data << " ";
    printInorder(root->right);
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    Node *root = buildTree(postorder, inorder, 0, 4);
    printInorder(root);

    return 0;
}
