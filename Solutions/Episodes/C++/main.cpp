// Problem: Episodes
// Link to the problem: https://www.codechef.com/problems/EPISODES
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
        ll n, k;
        cin >> n >> k;
        cout << ((n * k) / 60) << " " << ((n * k) % 60) << endl;
    }
    return 0;
}
