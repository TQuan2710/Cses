#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 7;
vector<int> a;
int bs(int l, int r, int res)
{
    cout << l << " " << r << "\n";
    if(l == r) return l;
    int mid = (l + r) / 2;
    if(a[mid] < res) return bs(mid + 1, r, res);
    else return bs(l, mid, res);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(a.empty())
        {
            a.push_back(x);
            continue;
        }
        sort(a.begin(), a.end());
        int k = bs(0, a.size(), x);
        if(k == 0) a.push_back(x);
        cout << x << " " << k << "\n";
    }
    cout << a.size();
}