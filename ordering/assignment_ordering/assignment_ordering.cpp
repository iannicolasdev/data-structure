#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float grades[1000] = {0};
    float value;
    int start = 0;
    int end = 1000 - 1;
    bool found = false;

    srand(time(0));

    for (int i = 0; i < 1000; i++) {
        grades[i] = round(((float) rand() / RAND_MAX * 10) * 10) / 10;
    }

    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000 - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                float temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }

    cout << fixed << setprecision(1);

    for (int i = 0; i < 1000; i++) cout << "Grade: " << i + 1 << ": " <<  grades[i] << "\n";

    cout << "\nEnter a grade: "; 
    cin >> value;

    while (start <= end) {
        int middle = (start + end) / 2;

        if (abs(grades[middle] - value) < 0.01) { 
            found = true;
            break;
        }
        else if (grades[middle] < value) {
            start = middle + 1;
        } 
        else if (grades[middle] > value) {
            end = middle - 1;
        } 
    }

    if (found == true) cout << "The grade was found in the list";
    else cout << "The grade was not found in the list";
    
    return 0;
}