#include<bits/stdc++.h>
using namespace std;
double x,y,h;
int c =  0;
int isOk(double D)
{
    double h1 = sqrt(x*x-D*D);
    double h2 = sqrt(y*y-D*D);
    double newH = (1.0/((1.0/h1)+(1.0/h2)));
    if(newH>h)return 0;
    else return 1;


}

void solve()
{
    c++;
    cout<<"Case "<<c<<": ";

    cin>>x>>y>>h;
    double l=0;
    double r = min(x,y);
    double error = 1e-8;
    while(r-l>error)
    {
        double mid = (l+r)/2;
        if(isOk(mid)==0)l=mid;
        else r=mid;
    }

    cout << fixed << setprecision(10) << l<<endl;



}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }





}
