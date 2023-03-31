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
        int a[3];
        a[0]=0;
        a[1]=0;
        a[2]=0;
        while(n>2)
        {
            if(n%3==0)
            {
                a[0]=n/3;
                n=0;
            }
            else if(n%7==0)
            {
                a[2]=n/7;
                n=0;
            }
            else {
                a[1]++;
                n-=5;
            }

        }
        if(n)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<3;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        }

    }
    return 0;
}