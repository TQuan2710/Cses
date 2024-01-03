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
    if(n < 4 && n != 1) cout << "NO SOLUTION";
    else
    {
        for(ll i = 2;i <= n;i += 2) cout << i << " ";
        for(ll i = 1;i <= n;i += 2) cout << i << " ";
    }
    return 0;
}
