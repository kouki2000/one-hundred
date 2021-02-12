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
    vi a(n, 0);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[a.size() - 1] - a[0] << endl;
    return 0;
}