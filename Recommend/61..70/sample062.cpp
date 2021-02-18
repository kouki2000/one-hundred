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
    vi l(n);
    int ans = 0;
    int calc = 0;
    rep(i, n)
    {
        cin >> l[i];
        calc += l[i];
        ans = max(ans, l[i]);
    }

    if (calc - ans > ans)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
    return 0;
}