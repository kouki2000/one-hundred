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
    string s;
    cin >> n >> s;
    int val = n / 2;
    string str1 = s.substr(0, val);
    string str2 = s.substr(val, val);
    if (n % 2 == 1)
    {
        cout << "No" << endl;
        return 0;
    }
    else if (str1 == str2)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}