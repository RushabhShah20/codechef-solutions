// Problem: Chef and Cook-Off
// Link to the problem: https://www.codechef.com/problems/CCOOK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(5);
    ll count = 0;
    for (ll i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count++;
        }
    }
    switch (count)
    {
    case 1:
        cout << "Junior Developer" << endl;
        break;
    case 2:
        cout << "Middle Developer" << endl;
        break;
    case 3:
        cout << "Senior Developer" << endl;
        break;
    case 4:
        cout << "Hacker" << endl;
        break;
    case 5:
        cout << "Jeff Dean" << endl;
        break;
    default:
        cout << "Beginner" << endl;
        break;
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