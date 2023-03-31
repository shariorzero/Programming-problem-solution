#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a;
        cin>>a;
        int s[2],f[2];
        string str;
        for(int i=0;i<a;i++)
        {
            cin>>str;
            if(i==0)
            {
                if(str[1]=='0')
                    s[0]=0;
                else s[0]=1;
            }
            else if(i==1)
            {
                if(str[0]=='0')
                    s[1]=0;
                else s[1]=1;
            }
            if(i==a-1)
            {
                if(str[a-2]=='0')
                    f[1]=0;
                else f[1]=1;
            }
            if(i==a-2)
            {
                if(str[a-1]=='0')
                    f[0]=0;
                else f[0]=1;
            }
        }
        int sum=s[0]+s[1]+f[0]+f[1];
        //cout<<s[0]<<s[1]<<f[0]<<f[1]<<endl;
        if(sum==4||sum==0)
        {
            cout<<2<<endl;
            cout<<"1 2\n2 1"<<endl;
        }
        else if(sum==1||sum==3)
        {
            //cout<<123<<endl;
            if(s[0]==s[1])
            {
                if(f[0]==s[0])
                    cout<<"1\n"<<a-1<<" "<<a<<endl;
                else
                    cout<<"1\n"<<a<<" "<<a-1<<endl;
            }
            else
            {
                if(f[0]==s[0])
                {
                    cout<<"1\n1 2"<<endl;
                }
                else cout<<"1\n2 1"<<endl;
            }
        }
        else
        {
            if(s[0]==s[1])
                cout<<0<<endl;
            else
            {
                if(s[0]==f[0])
                {
                    cout<<"2\n1 2\n"<<a<<" "<<a-1<<endl;
                }
                else
                    cout<<"2\n1 2\n"<<a-1<<" "<<a<<endl;
            }
        }
    }
    return 0;
}