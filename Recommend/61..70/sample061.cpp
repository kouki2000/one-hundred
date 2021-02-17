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
    int n;
    cin >> n;
    vi h(n);
    rep(i, n)
    {
        cin >> h[i];
    }

    int ans = h[0];
    int cnt = 1;
    rep(i, n - 1)
    {
        if (ans <= h[i + 1])
        {
            ans = h[i + 1];
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}