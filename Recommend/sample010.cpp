#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

// https://atcoder.jp/contests/abc176/tasks/abc176_b

int main()
{
    string n;
    cin >> n;
    int ans = 0;
    rep(i, n.size())
    {
        ans += (n[i] - '0');
    }
    if (ans % 9 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}