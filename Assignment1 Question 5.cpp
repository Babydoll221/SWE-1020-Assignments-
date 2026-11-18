#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;
    double average;
    
    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    
    average = (double)sum / SIZE;
    
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    return 0;
}
