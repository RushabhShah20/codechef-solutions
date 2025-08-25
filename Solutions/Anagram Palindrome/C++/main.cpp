// Problem: Anagram Palindrome
// Link to the problem: https://www.codechef.com/problems/ACCOLITE01
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
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        bool x = false;
        int count = 0;
        for (auto i : m)
        {
            if (i.second % 2 != 0)
            {
                if (count == 0)
                {
                    count++;
                }
                else
                {
                    x = true;
                    break;
                }
            }
        }
        if (x == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}