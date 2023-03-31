#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l,i;
    cout<<endl;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='-' && str[i+1]=='-')
        {
            cout<<"2";
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='.')
        {
            cout<<"1";
            i++;
        }
        else cout<<"0";
    }
    return 0;
}