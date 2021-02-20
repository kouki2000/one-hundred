#include <bits/stdc++.h>
#include <cstdlib> // std::atoi, std::strtol
#include <cstdio>  // std::sscanf

#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
int INF = 1001001001;

string g1(string str)
{
    sort(str.begin(), str.end(), std::greater<char>());
    return str;
}

string g2(string str)
{
    sort(str.begin(), str.end());
    int cnt = 0;
    rep(i, str.length())
    {
        if (str[i] == '0')
        {
            cnt++;
        }
    }

    str.substr(cnt);

    return str;
}

ll func(string str1, string str2)
{
    ll ans = 0;
    string go = g1(str1);
    string gt = g2(str2);
    ll val1 = stoll(go);
    ll val2 = stoll(gt);
    ans = val1 - val2;
    return ans;
}

int main()
{
    ll k;
    string n;
    cin >> n >> k;
    ll ans = 0;
    rep(i, k)
    {
        string str1 = g1(n);
        string str2 = g2(n);
        ans = func(str1, str2);
        n = to_string(ans);
    }
    cout << n << endl;

    return 0;
}