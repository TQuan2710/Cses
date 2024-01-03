#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pii pair<int, int>
using namespace std;
ll t;
int main()
{
    cin >> t;
    while(t --)
    {
        ll x, y;
        cin >> x >> y;
        ll res = max(x, y);
        if(!(res % 2)) cout << (res == x ? res * res - y + 1 : (res - 1) * (res - 1) + x);
        else cout << (res == x ? (res - 1) * (res - 1) + y : res * res - x + 1);
        cout << endl;
    }
    return 0;
}