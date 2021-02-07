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
    int x;
    cin >> x;
    int ans = 0;
    int thousand = x / 500;
    ans += thousand * 1000;
    x -= thousand * 500;
    int five = x / 5;
    ans += five * 5;
    cout << ans << endl;
    return 0;
}