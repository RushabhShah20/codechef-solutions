// Problem: Possible Victory
// Link to the problem: https://www.codechef.com/problems/T20MCH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll r, o, c;
    cin >> r >> o >> c;
    cout << ((c + ((20 - o) * 36) > r) ? ("YES") : ("NO")) << endl;
    return 0;
}