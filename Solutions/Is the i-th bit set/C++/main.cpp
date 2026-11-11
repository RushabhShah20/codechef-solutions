// Problem: Is the i-th bit set
// Link to the problem: https://www.codechef.com/problems/ITHBITSET
class Solution
{
public:
    bool isBitSet(long long n, int i)
    {
        bitset<32> a(n);
        const bool ans = a[i] == 1;
        return ans;
    }
};