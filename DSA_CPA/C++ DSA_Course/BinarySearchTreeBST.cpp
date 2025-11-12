#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
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

// this insertion will make a skewed tree if the values are sorted
// to avoid that we can use self balancing trees like AVL or Red Black Tree
Node *insertIntoBST(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertIntoBST(root->left, val);
    }
    else
    {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}
// Doesn't build a balanced BST, just inserts nodes to make a BST
Node *buildBST(vector<int> values)
{
    Node *root = nullptr;
    for (int val : values)
    {
        root = insertIntoBST(root, val);
    }
    return root;
}
bool searchInBST(Node *root, int key)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (key < root->data)
    {
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}

Node* deleteFromBST(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }
    if (key < root->data) {
        root->left = deleteFromBST(root->left, key);
    } else if (key > root->data) {
        root->right = deleteFromBST(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = root->right;
        while (temp && temp->left != nullptr) {
            temp = temp->left;
        }
        // Copy the inorder successor's content to this node
        root->data = temp->data;
        // Delete the inorder successor
        root->right = deleteFromBST(root->right, temp->data);
    }
    return root;
}

int main()
{
    vector<int> values = {5, 3, 8, 1, 4, 7, 9};
    Node *root = buildBST(values);
    cout << "Inorder Traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;
    cout << "Search for 4 in BST: " << (searchInBST(root, 4) ? "Found" : "Not Found") << endl;
    cout << "Search for 10 in BST: " << (searchInBST(root, 10) ? "Found" : "Not Found") << endl;
    deleteFromBST(root, 3);
    cout << "Inorder Traversal after deleting 3: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}