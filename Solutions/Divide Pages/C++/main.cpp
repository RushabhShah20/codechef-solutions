// Problem: Divide Pages
// Link to the problem: https://www.codechef.com/problems/BOOKPAGES
class Solution
{
public:
    string checkArray(vector<int> &A)
    {
        int sum = 0;
        for (const int a : A)
        {
            sum += a;
        }
        if (sum % 2 == 0)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
};
