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
    int ans = 0;
    rep(i, s.size())
    {
        if (i % 2 != 0)
        {
            if (s[i] == 'L' || s[i] == 'U' || s[i] == 'D')
            {
                ans++;
            }
        }
        else
        {
            if (s[i] == 'R' || s[i] == 'U' || s[i] == 'D')
            {
                ans++;
            }
        }
    }

    if (ans == s.size())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}