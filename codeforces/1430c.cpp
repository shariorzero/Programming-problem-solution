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
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
        for(int i=n-1;i>1;i--)
        {
            cout<<i-1<<" "<<i+1<<endl;
        }
    }
    return 0;
}