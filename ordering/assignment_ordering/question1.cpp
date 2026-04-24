#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    float grades[1000] = {0};

    srand(time(0));

    for (int i = 0; i < 1000; i++) {
        grades[i] = (float) rand() / RAND_MAX * 10;
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

    cout << fixed << setprecision(2);

    for (int i = 0; i < 1000; i++) cout << "Grade: " << i + 1 << ": " <<  grades[i] << "\n";

    return 0;
}