#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    string str1,str2,str3,str4;
    cin>>str1>>str2>>n;
    for(i=0;i<n;i++)
    {
        cout<<str1<<" "<<str2<<endl;
        cin>>str3>>str4;
        if(str3==str1)str1=str4;
        else str2=str4;
    }
    cout<<str1<<" "<<str2<<endl;
    return 0;
}