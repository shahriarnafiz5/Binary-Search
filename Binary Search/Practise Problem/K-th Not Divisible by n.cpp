#include<bits/stdc++.h>
#define int long long int
using namespace std;
int n,k;
int isOk(int num){
     if((num-(num/n))<k)return 0;
     else return 1;


}
void codernahin()
{
    n,k;
    cin>>n>>k;
    int l=0;
    int r=1e18;
    while(l<r){
        int mid = (l+r)/2;
        if(isOk(mid)==0)l=mid+1;
        else r=mid;
    }
    cout<<l<<endl;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        codernahin();
    }




}
