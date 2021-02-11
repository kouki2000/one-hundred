#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i < (n); i++)
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
    rep(i, 10)
    {
        rep(j, 10)
        {
            if (i * j == n)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}