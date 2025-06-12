// Problem: Maximum Slams
// Link to the problem: https://www.codechef.com/problems/MAXSLAM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll x;
    cin >> x;
    cout << (((25 - x) % 4 == 0) ? ((25 - x) / 4) : (((25 - x) / 4) + 1)) << endl;
}