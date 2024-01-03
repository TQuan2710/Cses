#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pii pair<int, int>
using namespace std;
string s;
int main()
{
    cin >> s;
    int n = s.size(), res = 1, ans = 0;
    for(ll i = 1;i < n;i ++)
    {
        if(s[i] == s[i - 1]) res ++;
        else
        {
            ans = max(ans, res);
            res = 1;
        }
    }
    ans = max(ans,res);
    cout << ans;
    return 0;
}
