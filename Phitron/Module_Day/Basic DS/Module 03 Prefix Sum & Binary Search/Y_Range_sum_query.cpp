#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        ll sum;
        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }
    return 0;
}