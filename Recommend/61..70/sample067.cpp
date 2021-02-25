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
    bool flag = true;
    vector<string> str, w(n);
    rep(i, n)
    {
        cin >> w[i];
        str.push_back(w[i]);
        if (i != 0)
        {
            if (w[i - 1].substr(w[i - 1].size() - 1, 1) != w[i].substr(0, 1))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    rep(i, n)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (str[i] == str[j])
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}