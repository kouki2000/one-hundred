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
    int n, l;
    cin >> n >> l;
    int sum = 0;
    int val = INF;
    int cnt = 0;
    rep(i, n)
    {
        cnt = (i + l - 1);
        sum += cnt;
        val = min(val, abs(cnt));
    }
    if (cnt >= 0)
    {
        cout << sum - val << endl;
    }
    else
    {
        cout << sum - (val * (-1)) << endl;
    }
    return 0;
}