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
    ll a, b, k;
    cin >> a >> b >> k;
    ll calc = k - a;

    if (a >= k)
    {
        cout << a - k << " " << b << endl;
        return 0;
    }
    else if (a + b >= k)
    {
        cout << 0 << " " << b - calc << endl;
        return 0;
    }
    else
    {
        cout << 0 << " " << 0 << endl;
    }

    return 0;
}