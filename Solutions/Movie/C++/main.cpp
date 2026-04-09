// Problem: Movie
// Link to the problem: https://www.codechef.com/problems/MOVIE7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;
    if (n > m)
    {
        cout << m * c + (n - m) * a << endl;
    }
    else if (n < m)
    {
        cout << n * c + (m - n) * b << endl;
    }
    else
    {
        cout << n * c << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}