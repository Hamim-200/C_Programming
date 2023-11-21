#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cout << word << endl;
    }

    // WORD COUNT
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}