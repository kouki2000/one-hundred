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
    string s;
    cin >> s;
    vi point;
    int cnt = 0;
    rep(i, s.size() - 2)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}