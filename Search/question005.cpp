#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int result = 0;

    if (a + b < c * 2)
    {
        result = a * x + b * y;
    }
    else
    {
        int l = min(x, y);
        int h = max(x, y);
        int ans1 = l * c * 2 + (x - l) * a + (y - l) * b;
        int ans2 = h * c * 2;
        result = min(ans1, ans2);
    }

    cout << result << endl;
    return 0;
}