#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
ll INF = 1001001001;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vl val;
    val.push_back(a * c);
    val.push_back(a * d);
    val.push_back(b * c);
    val.push_back(b * d);
    ll ans;
    ans = max(max(val[0], val[1]), max(val[2], val[3]));
    cout << ans << endl;
    return 0;
}