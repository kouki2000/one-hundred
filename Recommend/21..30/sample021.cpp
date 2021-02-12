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
    int n, k;
    cin >> n >> k;
    vi p(n, 0);
    rep(i, n)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int ans = 0;
    rep(i, k)
    {
        ans += p[i];
    }
    cout << ans << endl;
    return 0;
}