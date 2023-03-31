#include<bits/stdc++.h>
using namespace std;
int crack(int a)
{
    int z=0;
    int i=1;
    while(a)
    {
        if(a%10)
        {
            z+=((a%10)*i);
            i*=10;
        }
        a/=10;

    }
    return z;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    if(crack(sum)==crack(a)+crack(b))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}