#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,n,l1,l2,k,ans;
    string a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        l1=a.size();
        l2=b.size();
        ans=0;
        if(l1>l2)goto lim;
        else
        {
            j=0;k=0;
            while(k<=l2)
            {
                if(a[j]==b[k])
                {
                    j++;
                    k++;

                }
                else if(a[j-1]==b[k]){
                    k++;

                }
                else goto lim;
            }
            if(k==(l2+1))ans=1;
        }
        lim:
        if(ans==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}