#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pii pair<int, int>
using namespace std;
ll n;
int main()
{
    cin >> n;
    ll res = 0, ans = (n * (n + 1)) / 2;
    for(ll i = 1;i < n;i ++)
    {
        ll x;
        cin >> x;
        res += x;
    }
    cout << ans - res;
    return 0;
}
