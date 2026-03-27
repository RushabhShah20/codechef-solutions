// Problem: Number of Factors
// Link to the problem: https://www.codechef.com/problems/NUMFACT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<ll> &primes)
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (const ll prime : primes)
        {
            while (x % prime == 0)
            {
                m[prime]++;
                x /= prime;
            }
        }
    }
    ll ans = 1;
    for (const pair<ll, ll> i : m)
    {
        ans *= (i.second + 1);
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
    vector<bool> isPrime(1000001, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 1000000; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> primes;
    primes.push_back(2);
    for (ll i = 3; i <= 1000000; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(primes);
    }
    return 0;
}