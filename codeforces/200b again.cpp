#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0,x;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
    printf("%0.5lf\n",sum/n);
    return 0;
}