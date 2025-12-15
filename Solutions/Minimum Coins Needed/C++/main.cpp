// Problem: Minimum Coins Needed
// Link to the problem: https://www.codechef.com/problems/VISA07
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    set<int> s = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    while (n > 0)
    {
        int x = 1;
        for (int y : s)
        {
            if (y > n)
            {
                break;
            }
            else
            {
                x = y;
            }
        }
        cout << x << " ";
        n -= x;
    }
    cout << endl;
    return 0;
}