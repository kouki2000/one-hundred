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
    int val = 0;
    int calc = 0;
    rep(i, n)
    {
        cin >> p[i];
        calc += p[i];
        val = max(val, p[i]);
    }
    cout << calc - val / 2 << endl;
    return 0;
}