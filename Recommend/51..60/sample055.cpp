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
    int n, d;
    cin >> n >> d;
    int val = d * 2 + 1;
    cout << (n + (val - 1)) / val << endl;
    return 0;
}