// Problem: Rectangle and Square
// Link to the problem: https://www.codechef.com/problems/RECSQ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a * b) == (c * c))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}