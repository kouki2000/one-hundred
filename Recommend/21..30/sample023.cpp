#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

const ll MX = 1e18;

int main()
{
    ll n;
    cin >> n;
    vl a(n, 0);
    int zero = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero++;
        }
    }

    ll ans = 1;
    if (zero > 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        rep(i, n)
        {
            if (double(a[i]) > double(MX / ans))
            {
                cout << -1 << endl;
                return 0;
            }
            ans *= a[i];
        }
    }

    cout << ans << endl;

    return 0;
}