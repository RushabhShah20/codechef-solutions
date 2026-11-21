// Problem: Mountain Peak
// Link to the problem: https://www.codechef.com/problems/DSCPPAS269P
vector<int> next_higher_peak(vector<int> &heights)
{
    const int n = heights.size();
    stack<int> st;
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= heights[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(heights[i]);
    }
    return ans;
}