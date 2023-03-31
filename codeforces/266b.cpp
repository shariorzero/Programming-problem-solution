#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,j,s;
    cin>>n>>s;
    string str, str1;
    cin>>str;

    for(j=0;j<s;j++)
    {
        for(i=0;i<n;i++)
        {
            if(str[i]=='B'&&str[i+1]=='G')
            {
                swap(str[i],str[i+1]);
                i++;
            }
        }
    }
    cout<<str;
    return 0;
}