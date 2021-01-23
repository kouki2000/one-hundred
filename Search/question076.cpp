#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
ll INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    vector<ll> s(n + 1, 0);
    rep(i, n)
    {
        s[i + 1] = s[i] + a[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        ll ans = -INF;
        for (int j = 0; i + j <= n; ++j)
        {
            ll val = s[i + j] - s[j];
            ans = max(ans, val);
        }
        cout << ans << endl;
    }
    return 0;
}