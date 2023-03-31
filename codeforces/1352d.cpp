#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int tmpa=a[0],tmpb=0,aa=a[0],b=0,moves=1,x=n-1,y=1,ex=0;
        while(tmpa>tmpb&&x>=y)
        {
            tmpb=0;
            moves++;
            if(moves%2==0)
            {
 
                while(tmpa>=tmpb&&x>=y)
                {
                    tmpb+=a[x--];
                }
                b+=tmpb;
            }
            else
            {
                while(tmpa>=tmpb&&x>=y)
                {
                    tmpb+=a[y++];
                }
                aa+=tmpb;
 
            }
 
            swap(tmpa,tmpb);
 
 
        }
        cout<<moves<<" "<<aa<<" "<<b<<endl;
    }
    return 0;
}