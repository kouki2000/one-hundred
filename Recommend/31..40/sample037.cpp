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
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n /= k;
    }
    cout << cnt << endl;
    return 0;
}