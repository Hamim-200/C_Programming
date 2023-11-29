#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 6, 2, 7, 4, 8, 2, 2, 2, 3, 2, 0};
    // vector<int> :: iterator it;
    // it = find(v.begin(),v.end(),3);

    auto it = find(v.begin(), v.end(), 3);

    if (it == v.end()){
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    //cout << *it;
    return 0;
}