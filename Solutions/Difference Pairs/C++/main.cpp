// Problem: Difference Pairs
// Link to the problem: https://www.codechef.com/problems/PREP68
int hasPairWithDifference(vector<int> &A, int N, int B)
{
    sort(A.begin(), A.end());
    int i = 0, j = 1;
    while (i < N && j < N)
    {
        if (i != j && A[j] - A[i] == B)
        {
            return 1;
        }
        else if (A[j] - A[i] < B)
        {
            j++;
        }
        else
        {
            i++;
        }
        if (i == j)
        {
            j++;
        }
    }
    return 0;
}