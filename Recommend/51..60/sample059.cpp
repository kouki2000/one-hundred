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
    vi w(n);
    rep(i, n)
    {
        cin >> w[i];
    }

    int ans = INF;
    int sum1 = 0;
    int sum2 = 0;
    rep(i, n - 1)
    {
        sum1 += w[i];
        sum2 = 0;
        for (int j = i + 1; j < n; ++j)
        {
            sum2 += w[j];
        }
        ans = min(ans, abs(sum1 - sum2));
        // cout << sum1 << " " << sum2 << " " << ans << endl;
    }
    cout << ans << endl;

    return 0;
}