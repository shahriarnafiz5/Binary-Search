#include<bits/stdc++.h>
using namespace std;
//Find the square root of any number with binary search....
int n;
int isOk(double x)
{

    if(x*x*x<n)return 0;
    else return 1;

}
int main()
{

    cin>>n;
    double l=0;
    double r = n+1;
    double error = 1e-9;
    while(r-l>error)
    {
        double mid = (l+r)/2.0;
        if(!isOk(mid))l=mid;
        else r=mid;
    }
    cout<<r<<endl;



}

