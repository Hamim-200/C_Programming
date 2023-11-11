#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x % 2)
    {
    case 0:
        cout << "even" << endl;
        break;
    case 1:
        cout << "Odd" << endl;
        break;
    default:
        cout << "enter number" << endl;
    }
    return 0;
}