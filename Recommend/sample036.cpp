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
    ll n, a, b;
    cin >> n >> a >> b;
    ll quotient = n / (a + b);
    int cnt = quotient * a;
    if (n % (a + b) < a)
    {
        cnt += (n % (a + b));
    }
    else
    {
        cnt += a;
    }
    cout << cnt << endl;
    return 0;
}