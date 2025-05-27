// Problem: ATM
// Link to the problem: https://www.codechef.com/problems/HS08TEST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    int x;
    double y;
    cin >> x >> y;
    if (x % 5 == 0 && x + 0.50 <= y)
    {
        y -= (x + 0.50);
    }
    cout << fixed << setprecision(2) << y << endl;
    return 0;
}