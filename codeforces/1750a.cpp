#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,ans = 1;
        cin>>n;
        int a[n];
        cin>>a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<a[0])
                ans = 0;
        }
        if(ans)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}