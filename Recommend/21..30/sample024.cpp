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
    int k;
    string s;
    cin >> k >> s;
    if (s.size() > k)
    {
        rep(i, k)
        {
            cout << s[i];
        }
        cout << "..." << endl;
    }
    else
    {
        rep(i, s.size())
        {
            cout << s[i];
        }
    }

    return 0;
}