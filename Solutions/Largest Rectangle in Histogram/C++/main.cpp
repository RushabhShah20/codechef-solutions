// Problem: Largest Rectangle in Histogram
// Link to the problem: https://www.codechef.com/problems/TXSINST03
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    stack<int> stack;
    stack.push(-1);
    for (int i = 0; i < a.size(); i++)
    {
        while (stack.top() != -1 && a[i] <= a[stack.top()])
        {
            int height = a[stack.top()];
            stack.pop();
            int width = i - stack.top() - 1;
            ans = max(ans, (height * width));
        }
        stack.push(i);
    }
    while (stack.top() != -1)
    {
        int height = a[stack.top()];
        stack.pop();
        int width = a.size() - stack.top() - 1;
        ans = max(ans, (height * width));
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}