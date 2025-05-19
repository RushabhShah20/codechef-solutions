// Problem: TCS Examination
// Link to the problem: https://www.codechef.com/problems/EXAMTIME
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
        ll dsa_dragon, toc_dragon, dm_dragon, dsa_sloth, toc_sloth, dm_sloth;
        cin >> dsa_dragon >> toc_dragon >> dm_dragon;
        cin >> dsa_sloth >> toc_sloth >> dm_sloth;
        ll sum_dragon = dsa_dragon + toc_dragon + dm_dragon;
        ll sum_sloth = dsa_sloth + toc_sloth + dm_sloth;
        if (sum_dragon > sum_sloth)
        {
            cout << "DRAGON" << endl;
        }
        else if (sum_dragon < sum_sloth)
        {
            cout << "SLOTH" << endl;
        }
        else
        {
            if (dsa_dragon > dsa_sloth)
            {
                cout << "DRAGON" << endl;
            }
            else if (dsa_dragon < dsa_sloth)
            {
                cout << "SLOTH" << endl;
            }
            else
            {
                if (toc_dragon > toc_sloth)
                {
                    cout << "DRAGON" << endl;
                }
                else if (toc_dragon < toc_sloth)
                {
                    cout << "SLOTH" << endl;
                }
                else
                {
                    cout << "TIE" << endl;
                }
            }
        }
    }
    return 0;
}