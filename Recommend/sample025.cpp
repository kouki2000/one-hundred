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
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    if (a - k >= 0)
    {
        cout << k << endl;
        return 0;
    }
    else
    {
        if (a + b >= k)
        {
            cout << a << endl;
            return 0;
        }
        else
        {
            cout << (k - (a + b)) * (-1) + a << endl;
        }
    }
    return 0;
}