#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        string s;
        cin>>s;
        int check = 0;
        int ans = 1;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='Q')
                check++;
            else if(check==0)
                continue;
            else
                check--;
        }
        if(!check)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}