// Problem: Make Cat
// Link to the problem: https://www.codechef.com/problems/INCAT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    if (freq[0] == 1 && freq[2] == 1 && freq[19] == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}