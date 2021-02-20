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
    string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str2 = "abcdefghijklmnopqrstuvwxyz";
    vector<bool> vec(s.length());
    rep(i, s.length())
    {
        if (i % 2 == 0)
        {
            rep(j, str2.length())
            {
                if (s[i] == str2[j])
                {
                    vec[i] = true;
                }
            }
        }
        else
        {
            rep(j, str1.length())
            {
                if (s[i] == str1[j])
                {
                    vec[i] = true;
                }
            }
        }
    }
    int cnt = 0;

    rep(i, s.length())
    {
        if (vec[i])
        {
            cnt++;
        }
    }
    if (cnt == s.length())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}