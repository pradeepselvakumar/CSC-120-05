#include <iostream>

using namespace std;

int main()
{
    double c, f;
    cout << "Enter temperature in F: ";
    cin >> f;

    c = (f - 32) * 5 / 9;

    cout << f << "F = " << c << "C!" << endl;

    return 0;
}
