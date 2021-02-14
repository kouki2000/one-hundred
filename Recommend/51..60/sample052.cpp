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
    float sum = 0;
    rep(i, n)
    {
        float a;
        cin >> a;
        sum += 1 / a;
    }
    float ans = 1 / sum;
    cout << ans << endl;
    return 0;
}