// Problem: Chef Finds Single Number
// Link to the problem: https://www.codechef.com/problems/ZCIBE01
int findSingleNumber(const vector<int> &numbers)
{
    int ans = 0;
    for (const int &number : numbers)
    {
        ans ^= number;
    }
    return ans;
}