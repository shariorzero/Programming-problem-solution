#include<iostream>
using namespace std;
int ansmin(int a1,int a2,int k1,int k2,int c)
{
    int x = (k1-1)*a1+(k2-1)*a2;
    if(c>x)
    {
        if(c-x>a1+a2)
            return a1+a2;

        else return c-x;
    }
    else return 0;
}
int ansmax(int a1,int a2,int k1,int k2,int c)
{
    if(k1<k2)
    {
        if(c>k1*a1)
        {
            c=c-(k1*a1);
            if(c/k2>a2)
                return a1+a2;
            else return a1+ (c/k2);
        }
        else return c/k1;
    }
    else
    {
        if(c>k2*a2)
        {
            c=c-(k2*a2);
            if(c/k1>a1)
                return a2+a1;
            else return a2+ (c/k1);
        }
        else return c/k2;
    }
}

int main()
{
    int i,j,a1,a2,k1,k2,c,x;
    cin>>a1>>a2>>k1>>k2>>c;
    cout<<ansmin(a1,a2,k1,k2,c)<<endl;
    cout<<ansmax(a1,a2,k1,k2,c);
    return 0;
}