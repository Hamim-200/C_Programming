#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10,20,30,40,50,60,70,80};
    // list<int> newList;

    // newList = myList; //1
    // newList.assign(myList.begin(),myList.end()); //2

    // myList.push_back(100);
    // myList.push_front(100);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(),2),100);
    // myList.insert(next(myList.begin(),2),{100,200,300});
    // list<int> newList = {1000,2000,3000};
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());

    // myList.erase(next(myList.begin(),2));
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    // replace(myList.begin(),myList.end(),30,100);

    auto it = find(myList.begin(),myList.end(),30);
    if(it == myList.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    // for(int val:myList){
    //     cout<<val<<endl;
    // }
    return 0;
}