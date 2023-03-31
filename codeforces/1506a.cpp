//Code by Md. Sharior Akram
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int ans=0;
        int dp[a.size()+1][b.size()+1];
        for(int i=0; i<a.size()+1; i++)
            dp[i][0]=0;
        for(int i=0; i<b.size()+1; i++)
            dp[0][i]=0;

        for(int i=0; i<a.size(); i++)
            for(int j=0; j<b.size(); j++)
            {
                if(a[i]==b[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                    ans=max(ans,dp[i+1][j+1]);
                }
                else
                    dp[i+1][j+1]=0;
            }
//        for(int i=0; i<a.size()+1; i++)
//        {
//            for(int j=0; j<b.size()+1; j++)
//            {
//                cout<<dp[i][j]<<" ";
//            }
//            cout<<endl;
//        }

        cout<<a.size()+b.size()-(ans*2)<<endl;
    }

    return 0;
}