// Problem: Genes
// Link to the problem: https://www.codechef.com/problems/GENE01
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char a, b;
    cin >> a >> b;
    if (a == 'R' || b == 'R')
    {
        cout << 'R' << endl;
        return;
    }
    else if (a == 'B' || b == 'B')
    {
        cout << 'B' << endl;
        return;
    }
    else
    {
        cout << 'G' << endl;
        return;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}