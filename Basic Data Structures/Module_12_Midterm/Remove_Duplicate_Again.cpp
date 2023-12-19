#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;

    while (true)
    {
        int X;
        cin >> X;
        if (X == -1)
        {
            break;
        }
        myList.push_back(X);
    }
    myList.sort();
    myList.unique();

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}