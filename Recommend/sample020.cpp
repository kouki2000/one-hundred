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
    int cnt = 0;
    rep(i, s.size())
    {
        string str = s.substr(i, 1);
        string str2 = t.substr(i, 1);
        if (str != str2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}