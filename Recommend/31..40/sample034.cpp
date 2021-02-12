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
    int n, m;
    cin >> n >> m;
    vi a(n, 0);
    int sum = 0;
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    int cnt = 0;
    rep(i, n)
    {
        if (a[i] * (4 * m) >= sum)
        {
            cnt++;
        }
    }

    if (cnt >= m)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;

    return 0;
}