// بِسْمِ اللهِ الرَّحْمَنِ الرَّحِيمِ
// ALLAH OYAJALLAH IS THE BEST PLANNER
// SO WHICH OF THE FAVORS OF YOUR LORD WILL YOU DENY ?
// HE IS THE ONE WHO GRANTS HONOR, AND HE IS ALSO THE ONE WHO CAN HUMILIATE
// CODE WITH PATIENCE, DEBUG WITH PRAYER, AND TRUST ALLAH WITH THE RESULTS
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// gcd function
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

// lcm function (overflow safe)
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
int c = 0;
void solve()
{
    c++;
    cout<<"Case "<<c<<":";
    double ab,ac,bc,k;
    cin>>ab>>ac>>bc>>k;
    double c = k/(k+1);
    double x = sqrt(c);
    double ad = ab*x;
    cout<<fixed<<setprecision(10)<<" "<<ad<<endl;

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}