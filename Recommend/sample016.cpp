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
    vi a(m), b(m);
    rep(i, m)
    {
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;
    vi c(k), d(k);
    rep(i, k)
    {
        cin >> c[i] >> d[i];
    }
    return 0;
}