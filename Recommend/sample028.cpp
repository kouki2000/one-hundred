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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 切り上げの計算をしてる
    if ((a + d - 1) / d < (b + c - 1) / b)
    {
        cout << "No" << endl;
        return 0;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}