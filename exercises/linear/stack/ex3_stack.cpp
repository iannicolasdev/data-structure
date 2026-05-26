#include <iostream>

using namespace std;

const int MAX_SIZE = 3;

int peek(int top, int stackArr[]) {
    return stackArr[top - 1];
}

void push(int value, int &top, int stackArr[]) {
    stackArr[top] = value;
    top++;
}

int main(){
    int stackArr[MAX_SIZE];
    int top = 0;

    push(10, top, stackArr);
    push(20, top, stackArr);
    push(30, top, stackArr);

    for (int i = top - 1; i >= 0; i--) cout << i << " [" << stackArr[i] << "]\n";

    cout << "Top: " << peek(top, stackArr);

    return 0;
}