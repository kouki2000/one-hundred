#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int fib(int val)
{
    int num1 = 1;
    int num2 = 1;
    int tmp = 1;
    for (int i = 1; i < val; ++i)
    {
        tmp = num1 + num2;
        num1 = num2;
        num2 = tmp;
    }
    return tmp;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}