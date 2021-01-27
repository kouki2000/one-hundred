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
    vl x(n), y(n);
    rep(i, n)
    {
        cin >> x[i] >> y[i];
    }
    int cnt = 0;
    rep(i, n)
    {
        for (int j = 0; j < i; ++j)
        {
            ll dy = y[j] - y[i];
            ll dx = x[j] - x[i];
            if (fabs(dy) <= fabs(dx))
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}