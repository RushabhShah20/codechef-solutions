// Problem: Mileage matters
// Link to the problem: https://www.codechef.com/problems/MILEAGE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y, a, b;
    cin >> n >> x >> y >> a >> b;
    ll c = x * b, d = a * y;
    if (c > d)
    {
        cout << "DIESEL" << endl;
    }
    else if (c < d)
    {
        cout << "PETROL" << endl;
    }
    else
    {
        cout << "ANY" << endl;
    }
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