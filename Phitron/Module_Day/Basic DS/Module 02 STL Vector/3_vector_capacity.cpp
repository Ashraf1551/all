#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
/*
    Mandatory Needed:
        v.size()
        v.clear()
        v.resize()
*/
int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;

    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(30);
    cout << v.capacity() << endl;
    v.push_back(40);
    cout << v.capacity() << endl;
    v.push_back(50);
    cout << v.capacity() << endl;

    return 0;
}