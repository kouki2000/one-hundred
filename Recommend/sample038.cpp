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
    bool flag = false;
    rep(i, n)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            if (a % 3 != 0 && a % 5 != 0)
            {
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }

    cout << "APPROVED" << endl;

    return 0;
}