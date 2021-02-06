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
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if (v * t > d)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else if (v * s < d)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}