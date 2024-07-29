#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
            return true;
        return false;
    }
};

int main()
{
    myStack st;

    return 0;
}