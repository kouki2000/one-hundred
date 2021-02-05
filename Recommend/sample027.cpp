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
    ll x;
    cin >> x;
    ll ans = 100;
    int cnt = 0;
    while (ans < x)
    {
        ans += ans / 100;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}