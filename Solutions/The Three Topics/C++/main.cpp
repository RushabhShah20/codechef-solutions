// Problem: The Three Topics
// Link to the problem: https://www.codechef.com/problems/THREETOPICS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll a, b, c, x;
    cin >> a >> b >> c >> x;
    if (a == x || b == x || c == x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}