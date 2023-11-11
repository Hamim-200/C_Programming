#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x = 2;
    switch(x)
    {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        default:
            cout<<"More Then Five"<<endl;
    }
    
    return 0;
}