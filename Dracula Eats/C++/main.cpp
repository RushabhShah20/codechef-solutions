// Problem: Dracula Eats
// Link to the problem: https://www.codechef.com/problems/CHEAT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << ((n - 1 + 6) / 7) << endl;
    }

    return 0;
}