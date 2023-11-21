#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";

    //a = a + b;
    // a+=b
    //a.append(b);
    // cout << a << endl;
    // cout << b << endl;

    //a="HelloA"
    a.push_back('A');
    a.pop_back();
    cout<<a<<endl;
    return 0;
}