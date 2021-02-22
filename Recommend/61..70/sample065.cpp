#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using vf = vector<float>;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    float ans = 0;
    rep(i, n)
    {
        string u;
        float x;
        cin >> x >> u;
        if (u == "JPY")
        {
            ans += x;
        }
        else if (u == "BTC")
        {
            ans += (x * 380000);
        }
    }
    cout << ans << endl;
    return 0;
}