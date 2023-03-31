#include<iostream>
using namespace std;
int main()
{
    long long int i,j,n,x,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ans=0;
        while(x>1)
        {
            if(x%2==0)x/=2;
            else if(x%3==0)x=(2*x)/3;
            else if(x%5==0)x=(4*x)/5;
            else
            {
                ans=-1;
                break;
            }
            ans++;

        }
        cout<<ans<<endl;
    }
    return 0;
}