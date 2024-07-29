#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i]<<" ";
    // }
    // cout<<endl;
    int i = 0, j = n - 1;
    bool flag = false;

    while (i < j)
    // {
    //     if (a[i] == a[j])
    //     {
    //         flag = true;
    //     }
    //     i++;
    //     j--;
    // }
    {
        if (a[i] == a[i + 1])
        {
            flag = true;
        }
        i++;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
