#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1,2,3,2,1,3,4,5,3,6,2,7,4,8,2,2,2,3,2,0};
    // replace(v.begin(),v.end(),2,89);

    vector<int> v = {1, 2, 3, 2, 1, 3, 4, 5, 3, 6, 2, 7, 4, 8, 2, 2, 2, 3, 2, 0, 2};
    replace(v.begin(), v.end() - 1, 2, 89);

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}