#include <iostream>

using namespace std;

const int MAX_SIZE = 3; 

void getSize(int size) {
    cout << "Size: " << size << "\n";
} 

void printQueue(int size, int queueArr[]) {
    for(int i = 0; i < size; i++) {
        cout << "[" << queueArr[i] << "] ";
    }   
    cout << "\n\n";
}

void enqueue(int &size, int queueArr[]) {
    int value;
    cout << "Enter value: ";
    cin >> value;

    queueArr[size] = value;
    size++;
}

void dequeue(int &size, int queueArr[]) {
    cout << "Removed: " << queueArr[0] << "\n";
    for(int i = 0; i < size - 1; i++) {
        queueArr[i] = queueArr[i + 1];
    }

    size--;
}

int main(){
    int queueArr[MAX_SIZE] = {0};
    int size = 0;

    enqueue(size, queueArr);
    enqueue(size, queueArr);
    enqueue(size, queueArr);
    
    printQueue(size, queueArr);
    getSize(size);
    
    dequeue(size, queueArr);
    getSize(size);

    return 0;
}