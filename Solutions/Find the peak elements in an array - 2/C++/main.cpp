// Problem: Find the peak elements in an array
// Link to the problem: https://www.codechef.com/problems/PEAKINARRAY1
vector<int> findPeaks(vector<int> &A, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (A[i] > A[i + 1])
            {
                ans.push_back(A[i]);
            }
        }
        else if (i == n - 1)
        {
            if (A[i] > A[i - 1])
            {
                ans.push_back(A[i]);
            }
        }
        else
        {
            if (A[i] > A[i - 1] && A[i] > A[i + 1])
            {
                ans.push_back(A[i]);
            }
        }
    }
    if (ans.empty())
    {
        return {-1};
    }
    else
    {
        return ans;
    }
}