#include <bits/stdc++.h>
using namespace std;
 
string check(long long n)
{
    if (n == 1)
        return "No";
    if (n % 2 == 1 && n > 1)
        return "Yes";
    return check(n / 2);
}
 
string solve()
{
    long long n;
    cin >> n;
    return check(n);
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
 
    return 0;
}