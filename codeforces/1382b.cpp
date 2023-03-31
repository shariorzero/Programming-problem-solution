#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int ans=0,tmp=1;
        int x,trig=0;
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<n;i++)
        {
            if(a[i]==1)swap(ans,tmp);
            else
            {
                swap(ans,tmp);
                break;

            }
        }




        if(ans==1)cout<<"First"<<endl;
        else cout<<"Second"<<endl;

    }
    return 0;
}