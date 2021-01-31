#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

// https://atcoder.jp/contests/abc098/tasks/abc098_b

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 1; i < n; ++i)
    {
        int cnt = 0;
        string str1 = s.substr(0, i);
        string str2 = s.substr(i, n);
        rep(j, 26)
        {
            char c = 'a' + j;
            if (str1.find(c) != string::npos && str2.find(c) != string::npos)
            {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}