#include<bits/stdc++.h>
using namespace std;
double fact(double n)
{
    //cout<<n<<" ";
    if(n==1||n==0)return 1;
    return n*fact(n-1);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    double x1=0,x2=0,tmp=0,ans=0;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='+')
            x1++;
        else x1--;
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='?')
            tmp++;
        else if(s2[i]=='+')
            x2++;
        else x2--;
    }


    double want=x1-x2;
   // cout<<want<<endl;
    if(want<0)want*=(-1);
    int y=(int)(tmp-want);
    if(tmp<want||y%2==1)
        ans=0;
    else if(tmp==0)
    {
        if(want==0)
            ans=1;
        else ans=0;
    }
    else
    {
        double x=(tmp-want)/2+want;
        //cout<<x<<endl;
        ans=fact(tmp)/(fact(x)*fact(tmp-x)*pow(2,tmp));

    }
    printf("%0.12lf\n",ans);
    return 0;
}