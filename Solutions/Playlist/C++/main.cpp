// Problem: Playlist
// Link to the problem: https://www.codechef.com/problems/SONGS
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
        ll n, x;
        cin >> n >> x;
        cout << (n / (3 * x)) << endl;
    }
    return 0;
}