#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    int x, min_step;
    cin>>x;

    if(x%5==0)
    {
        min_step=x/5;
    }
    else
    {
        min_step=(x/5)+1;
    }
    cout<<min_step<<endl;

    return 0;
}