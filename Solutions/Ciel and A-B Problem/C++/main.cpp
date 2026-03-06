// Problem: Ciel and A-B Problem
// Link to the problem: https://www.codechef.com/problems/CIELAB
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    string ans = to_string(a - b);
    if (ans.front() == '9')
    {
        ans.front() = '1';
    }
    else
    {
        ans.front() = ans.front() - '0' + 1 + '0';
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}