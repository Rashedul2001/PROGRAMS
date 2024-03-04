#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data):data{data},left{nullptr},right{nullptr}{}
};

int search(int inorder[],int start,int end, int curr){
    for(int i=start; i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
        return -1;
}

Node* buildTree(int preorder[],int inorder[], int start,int end){
    static int idx=0;
    if(start>end){
        return nullptr;
    }
    int curr =preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start==end){
        return node;
    }

    int pos = search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
    return node;
}

void inorderPrint(Node*root) {
    if(root==nullptr){
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}


int main(){
    // int preorder[]= {1,2,4,3,5};
    // int inorder[]= {4,2,1,5,3};
    int preorder[]= {1 ,2 ,4, 5 ,3, 6, 7};
    int inorder[]= {4, 2, 5, 1, 6, 3, 7};
    //build Tree
    Node* root = buildTree(preorder,inorder,0,sizeof(preorder)/sizeof(preorder[0])-1);
    inorderPrint(root);



return 0;
}