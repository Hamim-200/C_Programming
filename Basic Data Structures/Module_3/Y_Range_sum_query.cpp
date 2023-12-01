#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--) //----O(q) complexity
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        for(int i=l;i<=r;i++){ //------O(n)complexity
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}