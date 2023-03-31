#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>n;
        if(n<10)
            cout<<n<<endl;
        else if(n>45)
            cout<<-1<<endl;
        else if(n==45)
            cout<<123456789<<endl;

        else if(n>9&&n<18)
        {
            for(int i=1;i<9;i++)
            {
                if(i+9==n)
                    cout<<i<<9<<endl;
            }
        }
        else if(n>17&&n<25)
        {
            for(int i=1;i<8;i++)
            {
                if(i+8+9==n)
                    cout<<i<<89<<endl;
            }
        }
        else if(n>24&&n<31)
        {
            for(int i=1;i<7;i++)
            {
                if(i+8+7+9==n)
                    cout<<i<<789<<endl;
            }
        }
        else if(n>30&&n<36)
        {
            for(int i=1;i<6;i++)
            {
                if(i+8+9+7+6==n)
                    cout<<i<<6789<<endl;
            }
        }
        else if(n>35&&n<40)
        {
            for(int i=1;i<5;i++)
            {
                if(i+8+9+5+6+7==n)
                    cout<<i<<56789<<endl;
            }
        }
        else if(n>39&&n<43)
        {
            for(int i=1;i<4;i++)
            {
                if(i+8+9+4+5+6+7==n)
                    cout<<i<<456789<<endl;
            }
        }
        else if(n==43)
            cout<<13456789<<endl;
        else cout<<23456789<<endl;
    }
    return 0;
}