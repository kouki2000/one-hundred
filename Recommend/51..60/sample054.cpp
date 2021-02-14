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
    vi p(n), p_copy(n);
    rep(i, n)
    {
        cin >> p[i];
        p_copy[i] = p[i];
    }

    int cnt = 0;
    sort(p_copy.begin(), p_copy.end());
    rep(i, n)
    {
        if (p[i] != p_copy[i])
        {
            cnt++;
        }
    }

    if (cnt <= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}