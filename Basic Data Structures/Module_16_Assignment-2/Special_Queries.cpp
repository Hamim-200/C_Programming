#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;

    queue<string> q;
    while(Q--)
    {
        int x;
        cin>>x;
        if(x == 0)
        {
            string name;
            cin>>name;
            q.push(name);
        }
        else if(x == 1 && !q.empty())
        {
            cout<<q.front()<<endl;
            q.pop();
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}