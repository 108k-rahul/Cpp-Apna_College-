#include<bits/stdc++.h>
using namespace std;

class Node{    
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this-> data = data;
        left=right=NULL;
    }
};

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }

    return root;
}

void inorder(Node* root, vector<int>& result){
    if(root != NULL){
        inorder(root->left, result);
        cout<<root->data<<" ";
        inorder(root->right, result);
    }
}

vector<int> sortBST(Node* root){
    vector<int> result;
    inorder(root, result);
    return result;
}

int main(){
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    vector<int> sort = sortBST(root);

    for(int val : sort){
        cout<<val<<" ";
    }    
    return 0;
}