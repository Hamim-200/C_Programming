#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //FIRST INDEX
    cout<<s[0]<<endl;
    cout<<s.at(1)<<endl;

    //LAST INDEX
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;
    return 0;
}