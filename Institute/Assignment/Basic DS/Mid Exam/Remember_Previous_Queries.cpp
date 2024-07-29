#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    list<int> myList;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 2)
        {
            if (v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }
        }
        else if (x == 0)
            myList.push_front(v);

        else if (x == 1)
            myList.push_back(v);

        cout << "L -> ";
        for (auto i = myList.begin(); i != myList.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;

        cout << "R -> ";
        for (auto i = myList.rbegin(); i != myList.rend(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }
    return 0;
}