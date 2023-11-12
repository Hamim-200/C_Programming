#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    // Minimum Value
    // int c = min(a,b);
    int mn = min({a,b,c,d});
    cout<<"Minimum Value :"<<mn;

    //Maximum Value
    // int d= max(a,b);
    // cout << c<<" " << d<<endl;
}