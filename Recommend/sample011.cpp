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
    double d;
    cin >> n >> d;
    int cnt = 0;
    rep(i, n)
    {
        double x, y;
        cin >> x >> y;
        double dist = 0;
        dist = x * x + y * y;
        if (dist <= d * d)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}