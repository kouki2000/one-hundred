#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    cin >> q;
    vector<int> m(q);
    rep(i, q)
    {
        cin >> m[i];
    }

    int cnt = 0;
    vector<int> box;

    for (int bit = 0; bit < (1 << n); ++bit)
    {
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (bit & (1 << i))
            {
                ans += a[i];
            }
        }
        box.push_back(ans);
    }

    rep(i, q)
    {
        int val = 0;
        rep(j, (1 << n))
        {
            if (m[i] == box[j])
            {
                val++;
            }
        }
        if (val > 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}