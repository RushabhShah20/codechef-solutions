// Problem: String Anagrams
// Link to the problem: https://www.codechef.com/problems/NUTANIX01
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
        string s1, s2;
        cin >> s1;
        cin >> s2;
        map<char, int> m1, m2;
        for (int i = 0; i < s1.size(); i++)
        {
            m1[s1[i]]++;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            m2[s2[i]]++;
        }
        if (m1 == m2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}