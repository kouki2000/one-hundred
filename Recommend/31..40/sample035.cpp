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
    string s;
    cin >> s;
    string s_rev(s);
    reverse(s_rev.begin(), s_rev.end());
    int calc = s.size() / 2;
    int cnt = 0;
    if (s == s_rev)
    {
        if (s.size() % 2 == 1)
        {
            string str1 = s.substr(0, calc);
            string str1_rev(str1);
            reverse(str1_rev.begin(), str1_rev.end());
            string str2 = s.substr(calc + 1, calc);
            string str2_rev(str2);
            reverse(str2_rev.begin(), str2_rev.end());
            if ((str1 == str1_rev) && (str2 == str2_rev))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        else
        {
            string str1 = s.substr(0, calc);
            string str1_rev(str1);
            reverse(str1_rev.begin(), str1_rev.end());
            string str2 = s.substr(calc, calc);
            string str2_rev(str2);
            reverse(str2_rev.begin(), str2_rev.end());
            if ((str1 == str1_rev) && (str2 == str2_rev))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}