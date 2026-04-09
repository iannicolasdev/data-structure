#include <iostream>

using namespace std;

#define MAX_SIZE 3

bool isFull(int top) {
    return top == MAX_SIZE;
}

bool isEmpty(int top) {
    return top == 0;
}

void printStack(int top, int stackArr[]) {
    if (isEmpty(top)) {
        cout << "Empty stack.\n\n";
        return;
    }

    cout << "\n";
    for (int i = top - 1; i >= 0; i--) cout << i << ": [" << stackArr[i] << "]\n";
    cout << "\n";
}

void push(int &top, int stackArr[]) {
    if (isFull(top)) {
        cout << "Full stack.\n\n";
        return;
    }
    cout << "Enter value: ";
    cin >> stackArr[top];

    top++;
    printStack(top, stackArr);
}

void pop(int &top, int stackArr[]) {
    if (isEmpty(top)) {
        cout << "Empty stack.\n\n";
        return;
    }
    cout << "Removed: " << stackArr[top - 1] << "\n";

    top--;
    printStack(top, stackArr);
}

int main(){
    int stackArr[MAX_SIZE] = {0};
    int top = 0;

    cout << "------------------\n";
    cout << "0 - Exit\n";
    cout << "1 - Push\n";
    cout << "2 - Pop\n";
    cout << "3 - View\n\n";

    while (true) {

        int choice;
        
        cout << "Choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1:
                push(top, stackArr);
                break;
            case 2:
                pop(top, stackArr);
                break;
            case 3:
                printStack(top, stackArr);
                break;    
            default:
                cout << "Invalid option\n\n";
                break;
            }
        }

    return 0;
}