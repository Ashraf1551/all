#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    vector<int>v={1,2,2,4,5,6,7,2,4,5,2};
    replace(v.begin(), v.end(),2, 100);
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}