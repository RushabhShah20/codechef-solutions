// Problem: Largest Odd Substring
// Link to the problem: https://www.codechef.com/problems/LARGODDSTRIN
void findLargestOddSubstring(string num)
{
    const int n = num.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] - '0' & 1)
        {
            cout << num << endl;
            return;
        }
        else
        {
            num.pop_back();
        }
    }
    cout << -1 << endl;
}