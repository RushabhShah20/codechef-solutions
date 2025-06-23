// Problem: Puzzle Hunt
// Link to the problem: https://www.codechef.com/problems/PUZHUNT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n >= 6 && n <= 8)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}