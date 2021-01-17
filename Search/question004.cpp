#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    int a[100][100];
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = i + 1; j < m; ++j)
        {
            ll cnt = 0;
            for (int k = 0; k < n; ++k)
            {
                cnt += max(a[k][i], a[k][j]);
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;

    return 0;
}