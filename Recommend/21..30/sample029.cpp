#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll ans = n;
    rep(i, m)
    {
        ll a;
        cin >> a;
        ans -= a;
    }
    if (ans >= 0)
    {
        cout << ans << endl;
        return 0;
    }
    cout << -1 << endl;

    return 0;
}