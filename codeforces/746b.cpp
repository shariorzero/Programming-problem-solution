#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    char str1[n],str[n];
    for(i=0;i<n;i++)cin>>str1[i];

    j=n-1;
    k=0;

    for(i=n-1;i>=0;)
    {
        str[j--]=str1[i];
        i--;
        if(i>=0){
        str[k++]=str1[i];
        i--;
        }
    }
    if(i==0)str[j--]=str1[0];
    for(i=0;i<n;i++)cout<<str[i];
    return 0;
}