//this is problem C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],tmp=0;
        cin>>a[0];
        int trigger=0;
        for(int i=1;i<n;i++)
            cin>>a[i];



        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                for( i=i-1;i>0;i--)
                {
                    if(a[i]<a[i-1])
                    {
                        tmp=i;
                        goto lim;
                    }
                }
            }
        }





        lim:;
        cout<<tmp<<endl;

    }
    return 0;
}