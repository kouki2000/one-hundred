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
    vi val(100005, 0);
    rep(i, n)
    {
        int a;
        cin >> a;
        val[a]++;
    }

    int ans = 0;
    for (int i = 1; i < 100005; ++i)
    {
        ans = max(val[i - 1] + val[i] + val[i + 1], ans);
    }
    cout << ans << endl;
    return 0;
}