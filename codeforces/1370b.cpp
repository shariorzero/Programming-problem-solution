#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef double dl;
typedef vector<int>vi;


int main()
{
    int t,n;
    cin>>t;
    int a[20000];
    while(t--)
    {
        cin>>n;
        int odd=0,even=0,skip=0,skip2=0,x=0;
        f(i,0,2*n)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(odd%2==0&&odd>1)
        {
            f(i,0,2*n)
            {
                if(a[i]%2==1)
                {
                    if(a[i]%2==1&&skip<2)
                    {
                        skip++;
                        continue;
                    }
                    if(x%2==0)
                        cout<<i+1<<" ";
                    else
                        cout<<i+1<<endl;
                    x++;
                }


            }
            f(i,0,2*n)
            {
                if(a[i]%2==0)
                {
                    if(x%2==0)
                        cout<<i+1<<" ";
                    else
                        cout<<i+1<<endl;
                    x++;
                }
            }
        }
        else if(odd%2==1)
        {
            f(i,0,2*n)
            {
                if(a[i]%2==1&&skip==0)
                {
                    skip++;
                    continue;
                }

                if(a[i]%2==1)
                {
                    if(x%2==0)
                        cout<<i+1<<" ";
                    else
                        cout<<i+1<<endl;
                    x++;
                }
            }
            f(i,0,2*n)
            {
                if(a[i]%2==0&&skip2==0)
                {
                    skip2++;
                    continue;
                }
                if(a[i]%2==0)
                {
                    if(x%2==0)
                        cout<<i+1<<" ";
                    else
                        cout<<i+1<<endl;
                    x++;
                }
            }
        }
        else
        {
            f(i,0,2*n)
            {
                if(a[i]%2==0&&skip<2)
                {
                    skip++;
                    continue;
                }
                if(a[i]%2==0)
                {
                    if(x%2==0)
                        cout<<i+1<<" ";
                    else
                        cout<<i+1<<endl;
                    x++;
                }
            }
            f(i,0,2*n)
            {
                if(a[i]%2==1)
                {
                    if(x%2==0)
                        cout<<i+1<<" ";
                    else
                        cout<<i+1<<endl;
                    x++;
                }
            }
        }
    }
    return 0;
}