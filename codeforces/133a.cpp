#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]+count=='H'||str[i]+count=='Q'||str[i]+count=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }


    }
    cout<<"NO"<<endl;
    return 0;;
}