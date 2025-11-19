// Problem: Rearranging digits to get a multiple of 5
// Link to the problem: https://www.codechef.com/problems/DIGARR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll d;
    cin >> d;
    string n;
    cin >> n;
    if ((n.find('5') != n.npos) || (n.find('0') != n.npos))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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