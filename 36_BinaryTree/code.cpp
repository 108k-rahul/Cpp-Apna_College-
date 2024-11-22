#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int>& nodes) {
    idx++;
    if (idx >= nodes.size() || nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    int choice;
    Node* root = NULL;
    
    while (true) {
        cin >> choice;
        if (choice == 1) {
            int n;
            cin >> n;
            vector<int> nodes(n);
            for (int i = 0; i < n; i++) {
                cin >> nodes[i];
            }
            root = buildTree(nodes);
        } else if (choice == 2) {
            cout << "Inorder: ";
            inorder(root);
            cout << endl;
        } else if (choice == 3) {
            cout << "Preorder: ";
            preorder(root);
            cout << endl;
        } else if (choice == 4) {
            cout << "Postorder: ";
            postorder(root);
            cout << endl;
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}
