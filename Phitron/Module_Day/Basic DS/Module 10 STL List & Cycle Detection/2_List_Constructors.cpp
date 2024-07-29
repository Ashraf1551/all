#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    // list <int> myList;              //type 1
    // list <int> myList(10);          //type 2
    // list <int> myList(10,5);        //type 3
    // list <int> list2 = {1,2,3,4,5}; //type 4
    // list <int> myList(list2);       //type 5
    // int a[5] = {1, 4, 5, 7, 8};     //type 6
    // list<int> myList(a, a + 5);     //type 7
    vector <int> v = {100,200,400};
    list <int> myList(v.begin(), v.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for(int val: myList)
    {
        cout<<val<<endl;
    }
    return 0;
}