#include <bits/stdc++.h>
using namespace std;
const int limit = 2e5 + 5;
int n;
vector<int> ele(limit), memo(limit);
 
void flashing()
{
    for (int i = 0; i < limit; i++)
    {
        memo[i] = 0;
    }
}
 
int dp(int idx, int curScore = 0)
{
    if (idx >= n)
    {
        return curScore;
    }
    if (memo[idx])
        return memo[idx];
    memo[idx] = dp(idx + ele[idx], curScore + ele[idx]);
    return memo[idx];
}
 
void solve()
{
    flashing();
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int score = dp(i);
        mx = max(mx, score);
    }
    cout << mx << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}