#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    double all = 0;
    rep(i, n)
    {
        cin >> a[i];
        all += a[i];
    }
    double ave = all / n;
    double ans = INF;
    int cnt = 0;
    rep(i, n)
    {
        double val = fabs(a[i] - ave);
        if (ans > val)
        {
            ans = val;
            cnt = i;
        }
    }
    cout << cnt << endl;
    return 0;
}