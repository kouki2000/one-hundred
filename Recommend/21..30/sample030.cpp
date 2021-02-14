#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    rep(i, n)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        ans += i;
    }
    cout << ans << endl;
    return 0;
}