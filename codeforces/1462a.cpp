#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,x;

        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        x=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                {
                    cout<<ar[x]<<" ";
                }
            else
            {
                cout<<ar[n-x-1]<< " ";
                x++;
            }

        }
        cout<<endl;
    }
    return 0;
}