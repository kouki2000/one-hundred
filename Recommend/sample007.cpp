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

    int d[102][102];
    rep(i, n)
    {
        rep(j, 2)
        {
            cin >> d[i][j];
        }
    }

    int cnt = 0;

    rep(i, n)
    {
        if (d[i][0] == d[i][1])
        {
            cnt++;
            if (cnt >= 3)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        else
        {
            cnt = 0;
        }
    }

    cout << "No" << endl;
    return 0;
}