#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    
    cout << "Enter a positive integer N: ";
    cin >> N;
    
    if (N <= 0) {
        cout << "Error: Please enter a positive integer!" << endl;
        return 1;
    }
    
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    cout << "Sum of numbers from 1 to " << N << " = " << sum << endl;
    
    return 0;
}
