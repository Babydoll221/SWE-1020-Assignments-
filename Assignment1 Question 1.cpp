#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 30 (Skip multiples of 3):" << endl;
    
    for (int i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            cout << "Skip ";
        } else {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
