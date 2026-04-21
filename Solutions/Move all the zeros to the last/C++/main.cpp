// Problem: Move all the zeros to the last
// Link to the problem: https://www.codechef.com/problems/SORTARRAYS
void sortColors(vector<int> &nums)
{
    const int n = nums.size();
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            one++;
        }
        else if (nums[i] == 2)
        {
            two++;
        }
        else
        {
            zero++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (zero > 0)
        {
            nums[i] = 0;
            zero--;
        }
        else if (one > 0)
        {
            nums[i] = 1;
            one--;
        }
        else
        {
            nums[i] = 2;
            two--;
        }
    }
}