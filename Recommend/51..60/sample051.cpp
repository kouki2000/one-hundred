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
    int n;
    cin >> n;
    vi a(n), b(n), c(n);
    vi cnt;
    int ans = 0;

    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        if (a[i] - a[i - 1] == 1 && (i > 0))
        {
            cnt.push_back(a[i - 1] - 1);
        }
        cin >> b[i];
    }

    rep(i, n - 1)
    {
        cin >> c[i];
    }

    rep(i, cnt.size())
    {
        ans += c[cnt[i]];
    }

    rep(i, n)
    {
        int val = a[i] - 1;
        ans += b[val];
    }
    cout << ans << endl;
    return 0;
}