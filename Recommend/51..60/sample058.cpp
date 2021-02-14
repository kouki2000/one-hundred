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
    int n, x;
    int cnt = 1, sum = 0;
    cin >> n >> x;
    rep(i, n)
    {
        int l;
        cin >> l;
        sum += l;
        if (sum <= x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}