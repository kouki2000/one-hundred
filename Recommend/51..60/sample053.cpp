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
    int k, x;
    cin >> k >> x;
    for (int i = x - k + 1; i <= x + k - 1; i++)
    {
        cout << i << endl;
    }
    return 0;
}