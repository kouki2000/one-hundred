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
    int h, n;
    cin >> h >> n;
    int sum = 0;
    rep(i, n)
    {
        int a;
        cin >> a;
        sum += a;
    }
    if (h > sum)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}