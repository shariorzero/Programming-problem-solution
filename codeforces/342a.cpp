#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    int one=0,two=0,three=0,four=0,six=0;
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
        if(a[i]==1)one++;
        else if(a[i]==2)two++;
        else if(a[i]==3)three++;
        else if(a[i]==4)four++;
        else if(a[i]==6)six++;
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    int b[t];
    if(one==t/3||(one<t/3&&t/3-one<=two))
    {

        for(int i=0; i<one*3; i+=3)b[i]=1;
        two=two-(t/3-one);
        for(int i=one*3; i<t; i+=3)b[i]=2;
        if(two+three==t/3&&three<=six&&two<=one&&one>=three)
        {
            for(int i=1;i<two*3;i+=3)b[i]=2;
            for(int i=two*3+1;i<t;i+=3)b[i]=3;
            for(int i=2;i<four*3;i+=3)b[i]=4;
            for(int i=four*3+2;i<t;i+=3)b[i]=6;
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    else
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0;i<t;i++)
    {
        cout<<b[i]<<" ";
        if(i%3==2)cout<<endl;
    }


    return 0;
}