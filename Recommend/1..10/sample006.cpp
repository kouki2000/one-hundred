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
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int ans = 0;
    int res = 0;

    for (int i = 2; i <= 1000; ++i)
    {
        int cnt = 0;
        rep(j, n)
        {
            if (a[j] % i == 0)
            {
                cnt++;
            }
        }
        if (ans < cnt)
        {
            ans = cnt;
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}