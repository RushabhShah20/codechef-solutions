// Problem: Multiple of 3
// Link to the problem: https://www.codechef.com/problems/MULT3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << n << endl;
    }
    else if (n % 3 == 1)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }

    return 0;
}