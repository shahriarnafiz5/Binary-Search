#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++)cin>>b[i];
    sort(a.begin(),a.end());
    for(int i=0; i<m; i++)
    {
        int ans = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
        cout<<ans<<" ";
    }


}
