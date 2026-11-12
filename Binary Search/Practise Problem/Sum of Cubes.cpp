#include<bits/stdc++.h>
using namespace std;
long long x;
int isOk(int a,int b)
{

    long long ans = (long long)a*a*a + (long long)b*b*b;
    if(ans<x)return 0;
    else return 1;


}
void codernahin()
{

    cin>>x;
    for(int a=1; a<=1e4; a++)
    {
        int l=1;
        int r=1e4;
        while(l<r)
        {
            int b = (l+r)/2;
            if(isOk(a,b)==0)
            {
                l=b+1;
            }
            else r=b;
        }
        if((long long)a*a*a+(long long)l*l*l==x){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;



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
