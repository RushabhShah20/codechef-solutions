// Problem: Is it a VOWEL or CONSONANT
// Link to the problem: https://www.codechef.com/problems/VOWELTB
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char c;
    cin >> c;
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}