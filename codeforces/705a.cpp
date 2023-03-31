#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t%2)
    {
        t--;
        for(int i=0;i<t;i++)
        {
            if(i%2==0)
                cout<<"I hate that ";
            else
                cout<<"I love that ";
        }
        cout<<"I hate it"<<endl;
    }
    else
    {
        t--;
        for(int i=0;i<t;i++)
        {
            if(i%2)
                cout<<"I love that ";
            else
                cout<<"I hate that ";
        }
        cout<<"I love it"<<endl;

    }
    return 0;
}