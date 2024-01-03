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
    cout << n << " ";
    while(n != 1)
    {
        cout << (!(n % 2) ? n /= 2 : n = 3 * n + 1) << " ";
    }
    return 0;
}
