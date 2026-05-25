#include <iostream>

using namespace std;

struct Node{
    int value;
    Node* next;
};

int size(Node* current) {
    int count = 0;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

int main(){

    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    Node* current = node1;

    node1->value = 10;
    node1->next = node2;
    
    node2->value = 20;
    node2->next = node3;
    
    node3->value = 30;
    node3->next = NULL;

    cout << size(current) << endl;

    return 0;
}