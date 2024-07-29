#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    list<string> myList;
    string web_address;

    while (cin >> web_address)
    {
        if (web_address == "end")
            break;
        myList.push_back(web_address);
    }

    int q;
    cin >> q;

    auto it = myList.begin();

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string web_name;
            cin >> web_name;
            auto find_it = find(myList.begin(), myList.end(), web_name);
            if (find_it != myList.end())
            {
                it = find_it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto next_it = next(it);
            if (next_it != myList.end())
            {
                it = next_it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (it == myList.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                it--;
                cout << *it << endl;
            }
        }
    }

    return 0;
}
