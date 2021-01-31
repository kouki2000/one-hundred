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
    vi val(4, 0);
    rep(i, n)
    {
        string s;
        cin >> s;
        if (s == "AC")
        {
            val[0]++;
        }
        else if (s == "WA")
        {
            val[1]++;
        }
        else if (s == "TLE")
        {
            val[2]++;
        }
        else if (s == "RE")
        {
            val[3]++;
        }
    }

    cout << "AC x " << val[0] << endl;
    cout << "WA x " << val[1] << endl;
    cout << "TLE x " << val[2] << endl;
    cout << "RE x " << val[3] << endl;

    return 0;
}