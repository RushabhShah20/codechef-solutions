// Problem: Life, the Universe, and Everything
// Link to the problem: https://www.codechef.com/problems/TEST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    bool x = true;
    while (cin >> n)
    {
        if (n == 42)
        {
            x = false;
        }
        if (x)
        {
            cout << n << endl;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}