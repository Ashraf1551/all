#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    // vector<int> v; type 01
    // vector<int> v(5); type 02
    // vector<int> v(5, 50); type 03
    // vector<int>v2(5,100); type 04
    // vector<int>v(v2); type 04
    int a[6]={1,2,3,4,5,6};
    vector<int>v(a, a+6);
    for(int i=0; i<v.capacity(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}