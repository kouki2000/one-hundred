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
    int n, k;
    cin >> n >> k;
    vector<bool> ans(110, 0);
    rep(i, n)
    {
        int d;
        cin >> d;
        rep(j, d)
        {
            int a;
            cin >> a;
            ans[a - 1] = 1;
        }
    }
    int cnt = 0;

    rep(i, n)
    {
        if (ans[i] == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}