#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    vector<int> v={1,2,3,4,5};
    vector <int> v2={10,20,30};
    //v.insert(v.begin()+2, 10);
    v.insert(v.begin()+2,v2.begin(), v2.end());
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}