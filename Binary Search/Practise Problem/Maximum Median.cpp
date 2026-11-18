#include<bits/stdc++.h>
using namespace std;
int n;
long long k;


int isOk(long long num,vector<long long>&a)
{

    long long count = 0;
    for(int i=(n/2);i<n;i++){
        if(a[i]<=num)count+=(num-a[i]);
    }
    if(count<=k) return 0;
    else return 1;
}

void codernahin()
{
    cin>>n>>k;
    vector<long long>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    sort(a.begin(),a.end());


    long long l=0;
    long long r=3e9;

    while(l<r)
    {
        long long mid = (l+r)/2;
        if(isOk(mid,a)==0)l=mid+1;
        else r = mid;

    }
    cout<<l-1<<endl;



}
int main()
{
    int t=1;

    while(t--)
    {
        codernahin();

    }


}
