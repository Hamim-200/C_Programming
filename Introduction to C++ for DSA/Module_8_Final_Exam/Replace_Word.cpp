#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string S;
        cin >> S;

        string X;
        cin >> X;

        while (S.find(X) != -1)
        {
            S.replace(S.find(X), X.length(), "#");
        }
        cout << S << endl;
    }

    return 0;
}
