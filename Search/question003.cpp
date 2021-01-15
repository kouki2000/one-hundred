#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    string str;
    cin >> str;
    string T = "ATGC";
    int now = 0;
    int ans = 0;
    rep(i, str.size())
    {
        bool isATGC = false;
        rep(j, T.size())
        {
            if (str[i] == T[j])
            {
                isATGC = true;
            }
        }
        if (!isATGC)
        {
            now = 0;
        }
        else
        {
            now++;
            ans = max(ans, now);
        }
    }
    cout << ans << endl;
    return 0;
}