#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<str[0];
        for(int i=1;i<str.size()-1;i+=2)
        {
            cout<<str[i];
        }
        cout<<str[str.size()-1]<<endl;
    }
    return 0;
}