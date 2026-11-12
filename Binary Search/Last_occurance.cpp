#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = { 1,2,3,4,5,5,5,6,7,8,9,9,9,9,9,9,9,9,9,10};
    int n = vec.size();
    int l=0;
    int r = n;
    int num;
    cin>>num;
    while(l<r)
    {
        int mid = (l+r)/2;
        if(vec[mid]<=num)l=mid+1;
        else r=mid;

    }


    if(l>0 && vec[l-1]==num)cout<<l-1<<endl;
    else cout<<-1<<endl;

}
