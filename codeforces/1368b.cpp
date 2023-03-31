#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x=1,answer;
    string str="codeforces";
    cin>>t;
    int a[10];
    for(int i=0;i<10;i++)
        a[i]=1;
    int s=0;
    while(x<t)
    {
        a[s]++;
        s++;
        s%=10;
        x=1;
        for(int i=0;i<10;i++)
        {
            x=x*a[i];
        }
    }
    for(int i=0;i<10;i++)
        while(a[i]--)cout<<str[i];

    cout<<endl;

    return 0;
}