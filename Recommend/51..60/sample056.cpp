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
    vi p(n);
    rep(i, n)
    {
        cin >> p[i];
    }
    int cnt = 0;

    for (int i = 1; i <= n - 2; ++i)
    {
        if (p[i - 1] < p[i] && p[i] < p[i + 1])
        {
            cnt++;
        }
        else if (p[i - 1] > p[i] && p[i] > p[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}