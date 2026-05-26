#include <iostream>

using namespace std;

const int MAX_SIZE = 3;

void enqueue(int value, int &size, int queueArr[]) {
    queueArr[size] = value;
    size++;
}

void front(int queueArr[]) {
    cout << "Front: " << queueArr[0] << "\n";
}

void printQueue(int size, int queueArr[]) {
    for (int i = 0; i < size; i++) cout << "[" << queueArr[i] << "] ";
    cout << "\n";
}

int main(){
    int queueArr[MAX_SIZE] = {0};
    int size = 0;

    enqueue(10, size, queueArr);
    enqueue(20, size, queueArr);
    enqueue(30, size, queueArr);
    
    printQueue(size, queueArr);

    front(queueArr);

    return 0;
}