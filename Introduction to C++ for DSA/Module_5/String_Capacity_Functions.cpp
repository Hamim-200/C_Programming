#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s<<endl;

    if(s.empty()==true) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
    string s;
    cin>>s;
    s.resize(5);
    cout<<s.size()<<endl;
    cout<<s<<endl;

    // RESIZE
    string s;
    cin>>s;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;
    return 0;
}