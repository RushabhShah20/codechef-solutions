// Problem: Area OR Perimeter
// Link to the problem: https://www.codechef.com/problems/AREAPERI
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, b;
    cin >> l >> b;
    ll a = l * b, p = 2 * (l + b);
    if (a > p)
    {
        cout << "Area" << endl;
        cout << a << endl;
    }
    else if (a < p)
    {
        cout << "Peri" << endl;
        cout << p << endl;
    }
    else
    {
        cout << "Eq" << endl;
        cout << a << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}