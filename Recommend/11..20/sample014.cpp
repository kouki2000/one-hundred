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
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 1)
    {
        if (b <= a)
        {
            cout << "Takahashi" << endl;
        }
        else
        {
            cout << "Aoki" << endl;
        }
    }
    else if (c == 0)
    {
        if (a <= b)
        {
            cout << "Aoki" << endl;
            return 0;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
    return 0;
}