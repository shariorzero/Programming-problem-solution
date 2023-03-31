#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1'||a[i]=='9'||a[i]=='4'||a[i]=='6'||a[i]=='8')
        {
            cout<<1<<endl<<a[i]<<endl;
            return;
        }
    }
    int tmp3=0,tmp7=0;
    for(int i=n-1;i>0;i--)
    {
        if(a[i]=='2')
        {
            cout<<2<<endl<<a[0]<<2<<endl;
            return;
        }
        if(a[i]=='5')
        {
            cout<<2<<endl<<a[0]<<5<<endl;
            return;
        }
        if(a[i]=='0')
        {
            cout<<2<<endl<<a[0]<<0<<endl;
            return;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]=='3')
            tmp3++;
        if(a[i]=='7')
            tmp7++;

        if(tmp7==2)
        {
            cout<<2<<endl<<77<<endl;
            return;
        }
        if(tmp3==2)
        {
            cout<<2<<endl<<33<<endl;
            return;
        }
        if((tmp7==1&&a[i]=='5')||(tmp7==1&&a[i]=='2'))
        {
            cout<<2<<endl<<a[i]<<7<<endl;
            return;
        }
    }
    cout<<n<<endl;
    cout<<a<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}