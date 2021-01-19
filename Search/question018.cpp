#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n, q;
    cin >> n;
    vector<int> s(n);
    rep(i, n)
    {
        cin >> s[i];
    }
    cin >> q;
    vector<int> t(q);
    rep(i, q)
    {
        cin >> t[i];
    }

    int cnt = 0;

    rep(i, q)
    {
        int left = 0;
        int right = n - 1;
        while (right >= left)
        {
            int mid = left + (right - left) / 2;
            if (s[mid] == t[i])
            {
                cnt++;
                break;
            }
            else if (s[mid] > t[i])
            {
                right = mid - 1;
            }
            else if (s[mid] < t[i])
            {
                left = mid + 1;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}