#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isValidString(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (!st.empty())
        {
            if (st.top() == '0' && c == '1')
            {
                st.pop();
            }
            else if ((st.top() == '1' && c == '0'))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isValidString(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
