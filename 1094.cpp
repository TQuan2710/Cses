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
    ll res = 0, ans = 0;
    while(n --)
    {
        ll x;
        cin >> x;
        res = max(res, x);
        ans += res - x;
    }
    cout << ans;
    return 0;
}