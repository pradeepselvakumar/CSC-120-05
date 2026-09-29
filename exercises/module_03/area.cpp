#include <iostream>
using namespace std;

int main()
{
    int length, width, area;

    cout << "This program calculates the area "
         << "of a rectangle." << endl;

    cout << "Enter length and width of the rectangle, "
         << "separated by a space: ";
    cin >> length >> width;

    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
