// Problem: Watching Movies at 2x
// Link to the problem: https://www.codechef.com/problems/MOVIE2X
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    cout << (x - (y / 2)) << endl;
    return 0;
}