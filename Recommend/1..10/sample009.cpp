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
    string s, t;
    cin >> s >> t;
    int ans = 0;
    rep(i, s.size() - t.size() + 1)
    {
        int cnt = 0;
        string str = s.substr(i, t.size());
        rep(j, t.size())
        {
            if (str[j] == t[j])
            {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << t.size() - ans << endl;

    return 0;
}