#include <iostream>

using namespace std;

int main(){
    int list[5] = {2, 4, 5, 1, 3};

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - 1; j++) {
            if(list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++) cout << list[i] << " ";

    return 0;
}