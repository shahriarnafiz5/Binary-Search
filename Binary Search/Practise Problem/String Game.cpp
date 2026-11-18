#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>deleted;
string t,p;
int can_we_convert(int operation)
{
    int count = 0;
    vector<int>sequence(n,0);
    for(int i=0; i<min(operation,n); i++)
    {
        sequence[deleted[i]] = 1;
    }
    for(int i=0;i<n;i++){
        if(sequence[i]==0 && t[i]==p[count])count++;
        if(count>=m)break;
    }
    if(count>=m)return true;
    else return false;

}

int isOk(int operation)
{
    if(can_we_convert(operation)) return 0;
    else return 1;

}

void solve()
{

    cin>>t>>p;
    n = t.size();
    m = p.size();
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        deleted.push_back(x-1);
    }
    int l=0;
    int r =n;
    while(l<r)
    {

        int operation = (l+r)/2;
        if(isOk(operation)==0)l=operation+1;
        else r=operation;
    }
cout<<l-1<<endl;


}
int main()
{

    int t=1;

    while(t--)
    {
        solve();
    }



}
