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
    cin >> n >> x;
    vi a(n, 0);
    int cnt = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] != x)
        {
            cnt++;
        }
    }

    remove(a.begin(), a.end(), x);

    rep(i, cnt)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}