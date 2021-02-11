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
    int n, k, m;
    cin >> n >> k >> m;
    int ave = n * m;
    int sum = 0;
    rep(i, n - 1)
    {
        int a;
        cin >> a;
        sum += a;
    }

    int ans = max(0, n * m - sum);

    if (ans > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}