// Problem: Healthy Sleep
// Link to the problem: https://www.codechef.com/problems/HEALSE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n < 8)
    {
        cout << "LESS" << endl;
    }
    else if (n > 8)
    {
        cout << "MORE" << endl;
    }
    else
    {
        cout << "PERFECT" << endl;
    }
    return 0;
}