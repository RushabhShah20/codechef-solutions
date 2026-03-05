// Problem: Bear and Candies 123
// Link to the problem: https://www.codechef.com/problems/CANDY123
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, i = 1;
    cin >> a >> b;
    while (a >= 0 && b >= 0)
    {
        if (i % 2 == 0)
        {
            b -= i;
        }
        else
        {
            a -= i;
        }
        i++;
    }
    if (i % 2 == 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Limak" << endl;
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