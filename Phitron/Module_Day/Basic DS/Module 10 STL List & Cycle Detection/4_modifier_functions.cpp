#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    list<int> myList = {10, 20, 30, 34, 57, 89, 60};
    // list <int> newList;
    // newList = myList;
    // myList.push_front(200);
    // myList.pop_back();
    // newList.assign(myList.begin(), myList.end());
    // myList.insert(next(myList.begin(),2),{100,200,300});
    // list <int> newList={22,23,45};
    // myList.insert(next(myList.begin(),2),newList.begin(), newList.end());
    // myList.erase(next(myList.begin(),2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(),myList.end(), 30, 100);
    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }
    auto it = find(myList.begin(), myList.end(), 10);
    if (it == myList.end())
    {
        cout << "NOT Found";
    }
    else
        cout << "Found" << endl;
    return 0;
}
