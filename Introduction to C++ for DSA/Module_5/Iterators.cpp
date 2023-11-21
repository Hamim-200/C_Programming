#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    // STEP_1
    string ::iterator it;
    cin >> s;

    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;

    // STEP_1
    for (it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    // STEP_2
    for (string ::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    // STEP_3
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}