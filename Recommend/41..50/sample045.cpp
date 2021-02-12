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
    string s;
    cin >> n >> s;
    rep(i, s.size())
    {
        int val = char(s[i] + n) % 91;
        if (val < 65)
        {
            val += char(65);
            s[i] = char(val);
            cout << s[i];
        }
        else
        {
            s[i] = char(val);
            cout << s[i];
        }
    }
    return 0;
}