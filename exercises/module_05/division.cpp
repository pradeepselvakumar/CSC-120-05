#include <iostream>

using namespace std;

int main()
{
    int divisor, dividend;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    while (dividend > 0)
    {
        int quotient = dividend / divisor;

        cout << dividend << "/" << divisor << " = " << quotient << " ";
        cout << "Remainder: " << dividend % divisor << "\n";

        dividend = quotient;
    }

    cout << endl;
}
