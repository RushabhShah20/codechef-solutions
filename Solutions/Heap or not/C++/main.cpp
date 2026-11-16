// Problem: Heap or not
// Link to the problem: https://www.codechef.com/problems/HEAP07P
string isMinHeap(int A[], int N)
{
    for (int i = 0; i <= (N - 2) >> 1; i++)
    {
        const int l = (i << 1) + 1, r = ((i + 1) << 1);
        if (l < N && A[i] > A[l])
        {
            return "No";
        }
        if (r < N && A[i] > A[r])
        {
            return "No";
        }
    }
    return "Yes";
}