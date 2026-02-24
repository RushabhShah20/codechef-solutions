// Problem: Sudhanva and Books
// Link to the problem: https://www.codechef.com/problems/SUDBOOKS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(stack<ll> &st)
{
    ll q;
    cin >> q;
    if (q == -1)
    {
        if (!st.empty())
        {
            cout << st.top() << endl;
            st.pop();
        }
        else
        {
            cout << "kuchbhi?" << endl;
        }
    }
    else
    {
        ll n;
        cin >> n;
        st.push(n);
    }
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
    stack<ll> st;
    while (t--)
    {
        solve(st);
    }
    return 0;
}