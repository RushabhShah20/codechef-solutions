// Problem: Off By One
// Link to the problem: https://www.codechef.com/problems/OFFBY1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << (a + b) * 10 + 1 << endl;
    return 0;
}