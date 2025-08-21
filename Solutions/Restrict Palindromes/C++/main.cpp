// Problem: Restrict Palindromes
// Link to the problem: https://www.codechef.com/problems/RESPAL
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
        ll n;
        cin >> n;
        string s = "abcdebcdeacdeabdeabceabcdabcdebcdeacdeabdeabceabcdabcdebcdeacdeabdeabceabcdabcdebcdeacdeabdeabceabcd";
        cout << s.substr(0, n) << endl;
    }
    return 0;
}
