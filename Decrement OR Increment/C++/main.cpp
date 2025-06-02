// Problem: Decrement OR Increment
// Link to the problem: https://www.codechef.com/problems/DECINC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }
    return 0;
}