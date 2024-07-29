#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack s;
    myQueue q;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        s.push(value);
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
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            flag = false;
            break;
        }
        s.pop();
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
