// Problem: Lucky Four
// Link to the problem: https://www.codechef.com/problems/LUCKFOUR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n > 0)
    {
        if (n % 10 == 4)
        {
            ans++;
        }
        n /= 10;
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}