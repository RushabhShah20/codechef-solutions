// Problem: Coloured Orbs
// Link to the problem: https://www.codechef.com/problems/COLORB
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll r, b;
    cin >> r >> b;
    if (r > b)
    {
        cout << (min(r, b) * 5) + (r - min(r, b)) << endl;
    }
    else
    {
        cout << (min(r, b) * 5) + ((b - min(r, b)) * 2) << endl;
    }
    return 0;
}
