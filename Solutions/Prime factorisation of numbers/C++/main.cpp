// Problem: Prime factorisation of numbers
// Link to the problem: https://www.codechef.com/problems/PRIMENUMBERS
class Solution
{
public:
    vector<vector<int>> primeFactorization(vector<int> &numbers)
    {
        const int n = numbers.size(), m = 200000;
        vector<int> sieve(m + 1);
        for (int i = 2; i <= m; i++)
        {
            sieve[i] = i % 2 == 0 ? 2 : i;
        }
        for (long long i = 3; i * i <= m; i += 2)
        {
            if (sieve[i] == i)
            {
                for (long long j = i * i; j <= m; j += i)
                {
                    if (sieve[j] == j)
                    {
                        sieve[j] = i;
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for (int number : numbers)
        {
            vector<int> factors;
            while (number > 1)
            {
                int p = sieve[number];
                while (number % p == 0)
                {
                    factors.push_back(p);
                    number /= p;
                }
            }
            ans.push_back(factors);
        }
        return ans;
    }
};
