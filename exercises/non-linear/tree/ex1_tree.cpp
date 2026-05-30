#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
}; 

int main(){
    Node* root = new Node;
    root->value = 10;
    root->left = nullptr;
    root->right = nullptr;
    
    root->left = new Node;
    root->left->value = 20;
    root->left->left = nullptr;
    root->left->right = nullptr;

    root->right = new Node;
    root->right->value = 30;
    root->right->right = nullptr;
    root->right->left = nullptr;

    cout << root->value << endl;
    cout << root->left->value << endl;
    cout << root->right->value << endl;

    return 0;
}