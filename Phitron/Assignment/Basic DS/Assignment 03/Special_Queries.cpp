#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int q;
    cin >> q;
    queue<string> myQ;

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            cin >> name;
            myQ.push(name);
        }
        else if (command == 1)
        {
            if (!myQ.empty())
            {
                cout << myQ.front() << endl;
                myQ.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}
