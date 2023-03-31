#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char>vs;
        vs.push_back(s[0]);
        int tmp=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=vs[tmp])
            {
                tmp++;
                vs.push_back(s[i]);
                if(tmp==3)
                    break;
            }

        }
        if(tmp==3)
            cout<<2<<endl;
        else if(tmp==0&&vs[0]=='1')
            cout<<0<<endl;
        else if(tmp==0&&vs[0]=='0')
            cout<<1<<endl;
        else if(tmp==1)
            cout<<1<<endl;
        else{
            if(vs[0]=='1')
                cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}