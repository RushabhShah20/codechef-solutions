// Problem: Add One
// Link to the problem: https://www.codechef.com/problems/ADDONE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int carry = 0;
        char x = n[n.size() - 1];
        n[n.size() - 1] = ((((x - '0') + carry + 1) % 10) + '0');
        carry = (((x - '0') + carry + 1) / 10);
        for (int i = n.size() - 2; i >= 0; i--)
        {
            x = n[i];
            n[i] = ((((x - '0') + carry) % 10) + '0');
            carry = (((x - '0') + carry) / 10);
        }
        if (carry == 1)
        {
            n.insert(n.begin(), '1');
        }
        cout << n << endl;
    }
    return 0;
}