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
    ll r;
    ll d;
    ll x;
    cin >> r >> d >> x;
    int ans = x;
    rep(i, 10)
    {
        ans = r * ans - d;
        cout << ans << endl;
    }
    return 0;
}