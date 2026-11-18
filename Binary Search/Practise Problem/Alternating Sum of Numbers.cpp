#include<bits/stdc++.h>
using namespace std;
void codernahin()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int sign = 1;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=(a[i]*sign);
             sign*=(-1);
    }
    cout<<sum<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        codernahin();
    }
}
