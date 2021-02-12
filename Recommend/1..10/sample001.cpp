#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> val;
    rep(i, n)
    {
        cin >> a[i];
    }

    rep(i, n)
    {
        int cnt = 0;
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            cnt++;
        }
        val.push_back(cnt);
    }

    sort(val.begin(), val.end());

    cout << val[0] << endl;

    return 0;
}