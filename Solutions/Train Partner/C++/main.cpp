// Problem: Train Partner
// Link to the problem: https://www.codechef.com/problems/ANKTRAIN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    switch (n % 8)
    {
    case 1:
        s += "LB";
        break;
    case 2:
        s += "MB";
        break;
    case 3:
        s += "UB";
        break;
    case 4:
        s += "LB";
        break;
    case 5:
        s += "MB";
        break;
    case 6:
        s += "UB";
        break;
    case 7:
        s += "SL";
        break;
    default:
        s += "SU";
        break;
    }
    string ans;
    if (s == "LB" || s == "MB" || s == "UB")
    {
        if (n % 8 >= 4)
        {
            ans += to_string(n - 3);
            ans += s;
        }
        else
        {
            ans += to_string(n + 3);
            ans += s;
        }
    }
    else
    {
        if (n % 8 == 0)
        {
            ans += to_string(n - 1);
            ans += "SL";
        }
        else
        {
            ans += to_string(n + 1);
            ans += "SU";
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}