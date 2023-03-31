#include<bits/stdc++.h>
using namespace std;
struct s{
    int x[5];
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        s ath[n];
        int sup=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>ath[i].x[j];
            }
            if(i>0)
            {
                int tmp=0;
                for(int j=0;j<5;j++)
                {
                    if(ath[i].x[j]<ath[sup].x[j])
                        tmp++;
                }
                if(tmp>=3)
                    sup=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            int tmp=0;
                for(int j=0;j<5;j++)
                {
                    if(ath[i].x[j]<ath[sup].x[j])
                        tmp++;
                }
                if(tmp>=3)
                    {
                        sup=-2;
                        break;
                    }
        }
        cout<<sup+1<<endl;
    }
    return 0;
}