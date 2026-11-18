#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter your exam score (0-100): ";
    cin >> score;
    
    if (score < 0 || score > 100) {
        cout << "Error: Invalid Score." << endl;
    } else if (score >= 50) {
        cout << "Congratulations, you Passed!" << endl;
    } else {
        cout << "Sorry, you Failed." << endl;
    }
    
    return 0;
}
