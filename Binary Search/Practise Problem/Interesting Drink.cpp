#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&a){

    int num;
    cin>>num;
    int ans = upper_bound(a.begin(),a.end(),num) - a.begin();
    cout<<ans<<endl;



}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    int days;
    cin>>days;

    while(days--)
    {
        solve(a);

    }



}
