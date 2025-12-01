// Problem: Largest Common Element in Two Arrays
// Link to the problem: https://www.codechef.com/problems/DSAPROB20
int largestCommonElement(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size(), m = arr2.size();
    int i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            i--;
        }
        else if (arr1[i] < arr2[j])
        {
            j--;
        }
        else
        {
            return arr1[i];
        }
    }
    return -1;
}
