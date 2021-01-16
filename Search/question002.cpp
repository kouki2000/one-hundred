#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int enum_divisors(int num)
{
    vector<int> ans;
    for (int i = 1; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            ans.push_back(i);
            if (num / i != i)
            {
                ans.push_back(num / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans.size();
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (enum_divisors(i) == 8 && (i % 2 == 1))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}