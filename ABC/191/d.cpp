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
    float x, y, r;
    cin >> x >> y >> r;
    int cnt = 0;
    for (float i = -r; i <= r; ++i)
    {
        for (float j = -r; j <= r; j++)
        {
            float z = i * i + j * j;
            if (z <= r * r)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}