// Problem: Take discount or Not
// Link to the problem: https://www.codechef.com/problems/DISCOUNTT
class Solution
{
public:
    string checkCoupon(int n, int x, int y, vector<int> &prices)
    {
        int a = 0, b = x;
        for (const int price : prices)
        {
            a += price;
            b += max(0, price - y);
        }
        if (b < a)
        {
            return "COUPON";
        }
        else
        {
            return "NO COUPON";
        }
    }
};
