#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,x=0,y=0,j,m=0,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    i=0;
    j=n-1;
    while(i<=j)
    {
        if(m%2==0)
        {
            if(a[i]>a[j]){
                x+=a[i];
                i++;
            }
            else {
                x+=a[j];
                j--;
            }
        }
        else
        {
            if(a[i]>a[j]){
                y+=a[i];
                i++;
            }
            else {
                y+=a[j];
                j--;
            }
        }
        m++;
    }
    cout<<x<<" "<<y;
    return 0;
}