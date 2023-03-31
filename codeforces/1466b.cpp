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
        int a[n+1];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=1, tmp=a[0];

        for(int i=1;i<n;i++)
        {
            //cout<<a[i]<<" "<<tmp<<endl;
            if(a[i]>tmp)
            {
                ans++;
                tmp=a[i];
            }
            else if(a[i]==tmp)
            {
                a[i]++;


                ans++;
                tmp=a[i];

            }
            else
                continue;

        }
        cout<<ans<<endl;
    }
    return 0;
}
 