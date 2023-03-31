#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>n>>m;
        if(n%2==0&&m%2==0)
        {
            for(int i=0; i<n; i++)
            {
                for(int k=0; k<m; k++)
                {
 
                    if((n+m)%2==0&&k+i==(n+m-2))
                        cout<<"B";
                    else if((k+i)%2==0)
                        cout<<"W";
                    else
                        cout<<"B";
                }
                cout<<endl;
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                for(int k=0; k<m; k++)
                {
                    if((k+i)%2==0)
                        cout<<"B";
                    else if((n*m)%2==0&&k*i==(n-1)*(m-1))
                        cout<<"B";
                    else
                        cout<<"W";
                }
                cout<<endl;
            }
        }
 
    }
    return 0;
}