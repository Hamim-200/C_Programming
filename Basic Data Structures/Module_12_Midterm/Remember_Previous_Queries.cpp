#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            myList.push_front(V);
        }
        else if (X == 1)
        {
            myList.push_back(V);
        }
        else if (X == 2 && !myList.empty() && V >= 0 && V < myList.size())
        {
            auto it = myList.begin();
            advance(it, V);
            myList.erase(it);
        }

        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        auto it2 = myList.rbegin();
        while (it2 != myList.rend())
        {
            cout << *it2 << " ";
            it2++;
        }
        cout << endl;
    }
    return 0;
}