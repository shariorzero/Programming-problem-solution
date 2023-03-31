#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n>>i>>j;
    int ans=(min(n-i,j+1));
    cout<<ans<<endl;
    return 0;
}