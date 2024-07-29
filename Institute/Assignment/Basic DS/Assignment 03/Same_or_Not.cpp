#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
