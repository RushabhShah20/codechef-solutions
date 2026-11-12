// Problem: Password protection
// Link to the problem: https://www.codechef.com/problems/PASSPRO
string checkPassword(int arr[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        m += arr[i];
    }
    const string ans = m == n ? "SECURE" : "NOT SECURE";
    return ans;
}