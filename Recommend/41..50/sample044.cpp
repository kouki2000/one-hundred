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
    string s;
    cin >> s;
    string s_rev(s);
    reverse(s_rev.begin(), s_rev.end());
    int cnt = 0;
    rep(i, s.size())
    {
        if (s[i] != s_rev[i])
        {
            cnt++;
        }
    }

    cout << cnt / 2 << endl;

    return 0;
}