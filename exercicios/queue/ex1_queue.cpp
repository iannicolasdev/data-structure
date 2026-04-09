#include <iostream>

using namespace std;

const int MAX_SIZE = 3;

void printQueue(int size, int queueArr[]) {
    if (size == 0) {
        cout << "Empty queue.\n\n";
        return;       
    }

    cout << "\n";
    for(int i = 0; i < size; i++) {
        cout << "[" <<queueArr[i] << "] ";
    }
    cout << "\n\n";
}

void enqueue(int &size, int queueArr[]) {
    int value; 

    if (size == MAX_SIZE) {
        cout << "Full queue.\n\n";
        return;
    } 

    cout << "Enter value: ";
    cin >> value;
    queueArr[size] = value;
    
    size++;
    printQueue(size, queueArr);
}

void dequeue(int &size, int queueArr[]) {
    if (size == 0) {
        cout << "Empty queue.\n\n";
        return;
    }

    cout << "Removed: " << queueArr[0] << "\n";
    for (int i = 0; i < size - 1; i++) {
        queueArr[i] = queueArr[i + 1];
    }

    size--; 
    printQueue(size, queueArr);
}

int main() {
    int queueArr[MAX_SIZE] = {0};
    int size = 0;

    cout << "------------------\n";
    cout << "0 - Exit\n";
    cout << "1 - Insert\n";
    cout << "2 - Remove\n";
    cout << "3 - View\n\n";

    while (true) {

        int choice;
        
        cout << "Choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1:
                enqueue(size, queueArr);
                break;
            case 2:
                dequeue(size, queueArr);
                break;
            case 3:
                printQueue(size, queueArr);
                break;    
            default:
                cout << "Invalid option.\n\n";
                break;
            }
        }

    return 0;
}