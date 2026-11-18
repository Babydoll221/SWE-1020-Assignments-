#include <iostream>
using namespace std;

int main() {
    double celsius;
    
    cout << "Enter current temperature in Celsius: ";
    cin >> celsius;
    
    if (celsius > 30) {
        cout << "It's hot! Stay hydrated." << endl;
    } else if (celsius >= 15 && celsius <= 30) {
        cout << "Beautiful day! Enjoy the weather." << endl;
    } else {
        cout << "It's chilly! Wear a jacket." << endl;
    }
    
    return 0;
}
