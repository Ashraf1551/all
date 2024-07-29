#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.max_size();
    // myList.clear();
    myList.resize(2);
    myList.resize(5,100);
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}
