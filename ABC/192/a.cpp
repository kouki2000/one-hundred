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
    if (x % 100 == 0)
    {
        cout << 100 << endl;
    }
    else
    {
        cout << 100 - x % 100 << endl;
    }
    return 0;
}