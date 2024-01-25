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
    if(n < 4 && n > 1) cout << "NO SOLUTION"; // the min distance that we can make is 1,not for n equal to 1
    else if (n == 4) cout << "2 4 1 3"; // special case
    else
    {
        for(ll i = 1;i <= n;i += 2) cout << i << " ";
        for(ll i = 2;i <= n;i += 2) cout << i << " ";
    }
    return 0;
}
