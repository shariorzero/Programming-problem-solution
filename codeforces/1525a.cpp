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

            int x=100-n;
            for(int i=100;i>1;i--)
            {
                if(n%i==0&&(x)%i==0)
                {
                    n/=i;
                    x/=i;
                }
            }
            cout<<n+x<<endl;

    }
    return 0;
}