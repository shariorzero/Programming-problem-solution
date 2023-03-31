#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        //cout<<s.size()<<endl;
        int n;
        cin>>n;
        int a[n];
        //for(int i=0;i<55;i++)s[i]='a';

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<s<<endl;
        for(int i=0;i<n;i++)
        {
            if(s[a[i]]=='a')s[a[i]]='b';
            else s[a[i]]='a';
            cout<<s<<endl;
        }

    }
    return 0;
}