#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0,ans=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                a++;
            }
            else b++;
            if(a<b)
            {
                ans++;
                b--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}