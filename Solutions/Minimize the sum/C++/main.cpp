// Problem: Minimize the sum
// Link to the problem: https://www.codechef.com/problems/CODEVITA21B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    for (ll i = 0; i < k; i++)
    {
        ll y = pq.top();
        pq.pop();
        pq.push(y / 2);
    }
    ll ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}