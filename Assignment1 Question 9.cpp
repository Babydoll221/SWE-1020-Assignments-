#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int target;
    int low = 0, high = size - 1;
    int steps = 0;
    bool found = false;
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    
    cout << "\nEnter target number to search: ";
    cin >> target;
    
    cout << "\nBinary Search Steps:\n";
    while (low <= high) {
        steps++;
        int mid = (low + high) / 2;
        
        cout << "Step " << steps << " -> Left: " << low 
             << ", Right: " << high 
             << ", Mid: " << mid 
             << " (Value: " << numbers[mid] << ")" << endl;
        
        if (numbers[mid] == target) {
            cout << "\nElement found at index " << mid << "!" << endl;
            found = true;
            break;
        } else if (numbers[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (!found) {
        cout << "\nElement not found in the array!" << endl;
    }
    
    return 0;
}
