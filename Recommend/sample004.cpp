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
    vl l(n);
    rep(i, n)
    {
        cin >> l[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (l[i] + l[j] > l[k] && l[j] + l[k] > l[i] && l[k] + l[i] > l[j])
                {
                    if (l[i] != l[j] && l[j] != l[k] && l[i] != l[k])
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}