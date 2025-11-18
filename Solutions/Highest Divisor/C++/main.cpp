// Problem: Highest Divisor
// Link to the problem: https://www.codechef.com/problems/HDIVISR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    int ans = 10;
    while (ans >= 1)
    {
        if (n % ans == 0)
        {
            break;
        }
        ans--;
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}