// Problem: Messi vs Ronaldo
// Link to the problem: https://www.codechef.com/problems/MVR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (((2 * a) + b) > ((2 * x) + y))
    {
        cout << "Messi" << endl;
    }
    else if (((2 * a) + b) < ((2 * x) + y))
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    return 0;
}