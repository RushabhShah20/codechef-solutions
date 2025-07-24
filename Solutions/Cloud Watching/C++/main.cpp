// Problem: Cloud Watching
// Link to the problem: https://www.codechef.com/problems/CWCTH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    if (b >= 3 * a)
    {
        cout << "Rain" << endl;
    }
    else
    {
        cout << "Dry" << endl;
    }

    return 0;
}