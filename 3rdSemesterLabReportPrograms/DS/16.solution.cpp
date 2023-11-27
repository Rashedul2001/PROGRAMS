#include <iostream>

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data{val}, left{nullptr}, right{nullptr} {}
};

void preOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;
    std::cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;
    inOrderTraversal(root->left);
    std::cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    std::cout << root->data << " ";
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    std::cout << "Preorder Traversal: ";
    preOrderTraversal(root);
    std::cout<<std::endl;
    std::cout << "Inorder Traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;
    std::cout << "Postorder Traversal: ";
    postOrderTraversal(root);

    return 0;
}
