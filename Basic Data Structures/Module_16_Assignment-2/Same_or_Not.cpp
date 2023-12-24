#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < N; ++i)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < M; ++i)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!st.empty() && !q.empty())
    {
        if (st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (st.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}