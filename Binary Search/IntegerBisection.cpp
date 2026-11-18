#include<bits/stdc++.h>
using namespace std;
#define ll long long
int isOk(ll x,ll y)
{
    if((__int128)x*x-2*y+x<0)return 0;
    else return 1;


}
void codernahin()
{
    ll y;
    cin>>y;
    ll l=0;
    ll r=1e18;

    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(isOk(mid,y)==0)l=mid+1;
        else
        {
            r=mid-1;
            if((__int128)mid*mid-2*y+mid==0)
            {
                cout<<mid<<endl;
                return;
            }
        }
    }

    cout<<"NAI"<<endl;

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
