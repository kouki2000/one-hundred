#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n = 5, x = 9;
    int ans = 0, cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            for (int k = j + 1; k <= n; ++k)
            {
                ans = i + j + k;
                if (ans == x)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}