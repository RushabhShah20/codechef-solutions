// Problem: Independence Day
// Link to the problem: https://www.codechef.com/problems/INDDAY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n <= 15)
    {
        cout << 15 - n << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}