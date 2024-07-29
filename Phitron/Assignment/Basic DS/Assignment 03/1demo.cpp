#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n, op;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == 0)
        {
            cin >> x;
            q.push(x);
        }
        else if (op == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
                cout << "Invalid\n";
        }
    }
}