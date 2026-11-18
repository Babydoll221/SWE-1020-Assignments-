#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 2, 67, 34, 9, 88, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "\nLargest number in the array = " << largest << endl;
    
    return 0;
}
