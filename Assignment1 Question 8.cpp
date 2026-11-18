#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = 10;
    int target;
    int low = 0, high = size - 1;
    int steps = 0;
    bool found = false;
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nEnter target number to search: ";
    cin >> target;
    
    while (low <= high) {
        steps++;
        int mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            cout << "Element found at index [" << mid << "]" << endl;
            cout << "Total comparisons (steps): " << steps << endl;
            found = true;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (!found) {
        cout << "Element not found" << endl;
        cout << "Total comparisons (steps): " << steps << endl;
    }
    
    return 0;
}
