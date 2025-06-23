// Problem: Best of Two
// Link to the problem: https://www.codechef.com/problems/DICEGAME2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        vector<ll> a = {a1, a2, a3};
        vector<ll> b = {b1, b2, b3};
        a.erase(min_element(a.begin(), a.end()));
        b.erase(min_element(b.begin(), b.end()));
        if (a[0] + a[1] > b[0] + b[1])
        {
            cout << "Alice" << endl;
        }
        else if (a[0] + a[1] < b[0] + b[1])
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}