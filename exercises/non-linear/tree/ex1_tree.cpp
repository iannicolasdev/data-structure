#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

void printTree(Node* node) {
    if (node == nullptr) return;

    cout << node->value << endl;

    printTree(node->left);
    printTree(node->right);
} 

int main(){
    Node* root = new Node;
    root->value = 10;
    
    root->left = new Node;
    root->left->value = 20;
    root->left->left = nullptr;
    root->left->right = nullptr;

    root->right = new Node;
    root->right->value = 30;
    root->right->right = nullptr;
    root->right->left = nullptr;

    printTree(root);

    return 0;
}