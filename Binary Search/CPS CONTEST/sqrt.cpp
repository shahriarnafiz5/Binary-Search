#include<bits/stdc++.h>
using namespace std;
double n;
int isOk(double x)
{
    if(x*x<n)return 0;
    else return 1;

}

int main()
{
    cout<<"Please enter any number: ";
    cin>>n;
    if(n<0){
        cout<<"Accept positive number only!"<<endl;
        return 0;
    }
    double l=0;
    double r=n+1;
    double error = 1e-8;
    while(r-l>error)
    {
        double mid = (l+r)/2;
        if(isOk(mid)==0)l=mid;
        else r=mid;
    }

    cout<<"Square root of "<<fixed<<setprecision(6)<<n<<" "<<"is "<<r<<endl;




}
