#include<iostream>
using namespace std;
int main()
{
    long long int t,i,j;
    cin>>t;
    for(j=0; j<t; j++)
    {
        long long int n,odd,sum=0;
        cin>>n>>odd;
        long long int k=0,a[n],b[n];
        if(odd==1)
        {
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
            if(sum%2==1)cout<<"YES\n"<<n<<endl;
            else cout<<"NO"<<endl;
        }
        else{

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(sum%2==1)
            {
                b[k++]=i+1;
                sum=0;
                if(k==odd-1)
                {
                    goto lim;
                }
            }
        }
lim:
        ;
        i++;
        for(; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1)
        {
            k++;
            cout<<"YES"<<endl;
            for(i=0; i<odd-1; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<n<<endl;
        }
        if(k<odd)
            cout<<"NO"<<endl;
        }
    }
    return 0;
}