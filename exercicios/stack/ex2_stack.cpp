#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

void getSize(int top) {
    cout << "Size: " << top << "\n"; 
}

void push(int &top, int stackArr[]) {
    cout << "Enter value: ";
    cin >> stackArr[top];
    top++;
}

void pop(int &top, int stackArr[]) {
    cout << "Removed: " << stackArr[top - 1] << "\n";
    top--;
}

void printStack(int top, int stackArr[]) {
    for (int i = top - 1; i >= 0; i--) cout << i << " [" << stackArr[i] << "]\n";
}

int main(){
    int stackArr[MAX_SIZE];
    int top = 0;

    push(top, stackArr);
    push(top, stackArr);
    push(top, stackArr);
    push(top, stackArr);
    push(top, stackArr);

    printStack(top, stackArr);
    getSize(top);

    pop(top, stackArr);
    getSize(top);

    return 0;
}