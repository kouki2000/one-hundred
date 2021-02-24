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
    int n, t;
    cin >> n >> t;
    int ans = INF;
    rep(i, n)
    {
        int c, lim;
        cin >> c >> lim;
        if (lim <= t)
        {
            ans = min(ans, c);
        }
    }
    if (ans == INF)
    {
        cout << "TLE" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}