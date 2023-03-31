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
        int a[n],count=0,perm=0,jump=1;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int tmp=0;
        while(1)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                    count++;
            }
            if(tmp%2==0)
            {
                for(int j=0;j<n-2;j+=2)
                {
                    if(a[j]>a[j+1])
                    {
                        swap(a[j],a[j+1]);
                    }
                }
                tmp=1;
            }
            else
            {
                for(int j=1;j<n-1;j+=2)
                {
                    if(a[j]>a[j+1])
                    {
                        swap(a[j],a[j+1]);
                    }
                }
                tmp=0;
            }
            
            
            //for(int k=0;k<n;k++)
              //  cout<<a[k]<<" ";
            //cout<<endl;
            
            if(count==0)
                    break;
            perm++;
            count=0;
        }
            
        cout<<perm<<endl;
    }
    return 0;
}