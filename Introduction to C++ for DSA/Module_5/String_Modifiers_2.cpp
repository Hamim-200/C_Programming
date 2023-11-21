#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    a.assign("Gello");
    cout<<a<<endl;

    string b = "HelloWorld";
    b.erase(4,1);
    cout<<b<<endl;

    string c = "HamimAhmed";
    c.replace(4,3,"SO");
    cout<<c<<endl;

    string d = "HamimAhmed";
    d.insert(5,"CSE");
    cout<<d<<endl;
    return 0;
}