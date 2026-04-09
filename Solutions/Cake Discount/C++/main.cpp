// Problem: Cake Discount
// Link to the problem: https://www.codechef.com/problems/DISCOUNT7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n < 5)
    {
        cout << n * 100 << endl;
    }
    else
    {
        cout << n * 85 << endl;
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