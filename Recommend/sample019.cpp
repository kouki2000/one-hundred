#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

ll func(ll val)
{
    if (val == 1)
    {
        return 1;
    }
    return func(val / 2) * 2 + 1;
}

int main()
{
    ll h;
    cin >> h;
    cout << func(h) << endl;
    return 0;
}