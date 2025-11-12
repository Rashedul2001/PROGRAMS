#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    int height;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
        height = 1;
    }
};

void inorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int getHeight(Node *node)
{
    return node ? node->height : 0;
}

void updateHeight(Node *node)
{
    if (node)
    {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        node->height = 1 + max(leftHeight, rightHeight);
    }
}

Node *rotateRight(Node *node)
{
    Node *newRoot = node->left;
    Node *temp = newRoot->right;

    newRoot->right = node;
    node->left = temp;

    updateHeight(node);
    updateHeight(newRoot);
    return newRoot;
}

Node *rotateLeft(Node *node)
{
    Node *newRoot = node->right;
    Node *temp = newRoot->left;

    newRoot->left = node;
    node->right = temp;

    updateHeight(node);
    updateHeight(newRoot);
    return newRoot;
}

int getBalance(Node *node)
{
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

Node* balanceForInsert(Node *root, int val){
    int balanceFactor = getBalance(root);

    if (balanceFactor > 1 && val < root->left->data)
    {
        return rotateRight(root);
    }
    if (balanceFactor < -1 && val > root->right->data)
    {
        return rotateLeft(root);
    }
    if (balanceFactor > 1 && val > root->left->data)
    {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balanceFactor < -1 && val < root->right->data)
    {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

Node* balanceForDelete(Node *root){
    int balanceFactor = getBalance(root);

    // Left heavy
    if (balanceFactor > 1)
    {
        if (getBalance(root->left) >= 0) {  // LL case
            return rotateRight(root);
        } else {  // LR case
            root->left = rotateLeft(root->left);
            return rotateRight(root);
        }
    }

    // Right heavy
    if (balanceFactor < -1)
    {
        if (getBalance(root->right) <= 0) {  // RR case
            return rotateLeft(root);
        } else {  // RL case
            root->right = rotateRight(root->right);
            return rotateLeft(root);
        }
    }

    return root;
}

Node *insert(Node *root, int val)
{
    if (!root)
        return new Node(val);

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        return root; // No duplicates allowed
    }

    updateHeight(root);
    return balanceForInsert(root, val);
}

Node *deleteNode(Node *root, int val)
{
    if (!root)
        return root;

    if (val < root->data)
    {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        if (!root->left || !root->right)
        {
            Node *temp = root->left ? root->left : root->right;
            if (!temp)
            {
                temp = root;
                root = nullptr;
            }
            else
            {
                *root = *temp;
            }
            delete temp;
        }
        else
        {
            Node *temp = root->right;
            while (temp->left)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    if (!root)
        return root;

    updateHeight(root);

    return balanceForDelete(root);
}

int main()
{
    vector<int> values = {10, 20, 40, 30, 40, 50, 15, 25};
    Node *root = nullptr;
    for (int val : values)
    {
        root = insert(root, val);
    }
    cout << "Inorder Traversal of the AVL Tree: ";
    inorderTraversal(root);
    cout << endl;

    deleteNode(root, 40);
    cout << "Inorder Traversal after deleting 40: ";
    inorderTraversal(root);
    cout << endl;
    return 0;
}
