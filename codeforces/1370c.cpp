#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef double dl;
typedef vector<int>vi;
const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];
typedef long long ll;
vector<int> a;

vector<int>findDivisors(int n)
{
    vector<int>div;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i&&i%2)
                div.push_back(i);
            else
            {
                if(i%2)div.push_back(i);
                if((n/i)%2)div.push_back(n/i);
            }
        }
    }
    return div;
}
ansA(int n)
{
    if(n==1)return 0;
    if(n%2==1)return 1;
    if(n==2)return 1;
    vector<int> divisors;
    divisors = findDivisors(n);
    if(divisors.size()==0)return 0;
    for(int i=0;i<divisors.size();i++)
    {
        //cout<<divisors[i]<<endl;
        if(ansA(n/divisors[i])==0)
            return 1;
    }
    return 0;
}

int main()
{
//    ios_main::sync_with_stdio(false);
  //  cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(ansA(n))cout<<"Ashishgup"<<endl;
        else cout<<"FastestFinger"<<endl;

    }
    return 0;
}