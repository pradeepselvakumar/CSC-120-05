#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int cost = 0;

    if (age < 5) {
        cost = 0;
    } else if (age <= 12) {
        cost = 5;
    } else if (age <= 17) {
        cost = 7;
    } else if (age <= 64) {
        cost = 10;
    } else {
        cost = 6;
    }

    cout << "Your ticket price is: $" << cost << endl; 
}