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
    string a, b;
    cin >> a >> b;
    if (a < b)
    {
        rep(i, std::stoi(b))
        {
            cout << a;
        }
    }
    else
    {
        rep(i, std::stoi(a))
        {
            cout << b;
        }
    }
    return 0;
}