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
    for(ll i = 1;i <= n;i ++)
    {
        ll k = 1 + (i - 1) * (i - 2) / 2;
        cout << k * (i - 1) * (i + 4) << "\n";
    }
    return 0;
}