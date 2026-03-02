// Problem: Changes remaining at Lemonade shop
// Link to the problem: https://www.codechef.com/problems/SUBTASK
bool canProvideChange(vector<int> &customerBills)
{
    const int n = customerBills.size();
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (customerBills[i] == 20)
        {
            if (y == 0)
            {
                if (x >= 3)
                {
                    x -= 3;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (x > 0)
                {
                    x--;
                    y--;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (customerBills[i] == 10)
        {
            if (x > 0)
            {
                x--;
                y++;
            }
            else
            {
                return false;
            }
        }
        else
        {
            x++;
        }
    }
    return true;
}
