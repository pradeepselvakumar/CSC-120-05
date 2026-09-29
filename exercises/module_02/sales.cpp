#include <iostream>

using namespace std;

int main()
{
    int totalSales = 8612345;
    int eastPercentage = 58;
    int eastSales = totalSales * eastPercentage / 100;
    cout << "East Coast Sales is " << eastSales << endl;
    return 0;
}
