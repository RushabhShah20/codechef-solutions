// Problem: Win the league
// Link to the problem: https://www.codechef.com/problems/WINLEAGUE
string findLeagueWinner(int A, int M)
{
    const string ans = A > M ? "TEAM A" : (A < M ? "TEAM M" : "DRAW");
    return ans;
}
