
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2)
            odd++;
        else even++;
    }
    if(odd%2)
        cout<<odd<<endl;
    else cout<<even<<endl;
    return 0;
}