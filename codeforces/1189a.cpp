#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n,ans,zero=0,one=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='0')zero++;
        else one++;
    }
    if(one==zero){
                cout<<"2"<<endl;
        for(i=0;i<n-1;i++)cout<<str[i];
        cout<<" "<<str[n-1];
    }
    else {
            cout<<"1"<<endl;
        for(i=0;i<n;i++)cout<<str[i];
    }
    return 0;

}