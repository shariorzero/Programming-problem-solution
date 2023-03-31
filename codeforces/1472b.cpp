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
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int tmp=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)tmp++;
            else break;
        }
        if((n-tmp)%2)
        {
            if(tmp>=2&&(tmp-2)%2==0)
               cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(tmp%2==0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
 
 
 
    }
    return 0;
}