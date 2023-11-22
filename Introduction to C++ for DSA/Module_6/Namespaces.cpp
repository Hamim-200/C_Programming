#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Rakib Namespace";
    }
}

namespace Sakib
{
    int age = 30;
    void hello()
    {
        cout << "Sakib Namespace";
    }

}

using namespace Rakib;
int main()
{
    cout << age << endl;
    hello();
    return 0;
}