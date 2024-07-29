#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    list<int> my_list;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)break;
        my_list.push_back(v);
    }
    my_list.sort();

    my_list.unique();

    for (auto val : my_list)
        cout << val << ' ';
    cout << endl;
    
    return 0;
}