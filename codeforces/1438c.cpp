#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m][n],x=0,z;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                cin>>z;
                if(i%2==0)
                {
                    if(j%2==0)
                    {
                        if(z%2==0)
                            a[i][j]=z;
                        else a[i][j]=z+1;
                    }
                    else
                    {
                        if(z%2==1)
                            a[i][j]=z;
                        else
                            a[i][j]=z+1;
                    }
                }
                else
                {
                    if(j%2==1)
                    {
                        if(z%2==0)
                            a[i][j]=z;
                        else a[i][j]=z+1;
                    }
                    else
                    {
                        if(z%2==0)
                            a[i][j]=z+1;
                        else
                            a[i][j]=z;
                    }
                }
            }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}