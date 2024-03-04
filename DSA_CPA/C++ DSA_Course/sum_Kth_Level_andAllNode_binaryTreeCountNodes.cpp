
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

int sumAtK(Node *root, int k)
{
    if (root == nullptr)
        return -1;

    std::queue<Node *> q;
    q.push(root);
    q.push(nullptr);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != nullptr)
        {
            if (level == k)
            {
                sum += node->data;
            }
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(nullptr);
            level++;
        }
    }
    return sum;
}
int countNodes(const Node* root){
    if(root==nullptr)return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}
int sumOfAllNodes(const Node* root){
    if (root==nullptr)return 0;
    return root->data+ sumOfAllNodes(root->left)+sumOfAllNodes(root->right);
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

    std::cout << sumAtK(root, 2) << std::endl;;
    std::cout << countNodes(root) << std::endl;
    std::cout << sumOfAllNodes(root) << std::endl;

    return 0;
}
