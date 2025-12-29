// Problem: ChefWatson uses Social Network
// Link to the problem: https://www.codechef.com/problems/BOOKCHEF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

struct Post
{
    int f;
    int p;
    string s;
};

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), f(m), p(m);
    set<int> friends;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        friends.insert(a[i]);
    }
    sort(a.begin(), a.end());
    vector<Post> posts(m);
    for (ll i = 0; i < m; i++)
    {
        Post post;
        cin >> post.f >> post.p;
        cin.ignore();
        getline(cin, post.s);
        posts.push_back(post);
    }
    sort(posts.begin(), posts.end(), [&](const Post &a, const Post &b)
         { bool x = (friends.count(a.f)>0);bool y=(friends.count(b.f)>0);if(x!=y){return x>y;}else{return a.p>b.p;} });
    for (const Post &post : posts)
    {
        cout << post.s << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}