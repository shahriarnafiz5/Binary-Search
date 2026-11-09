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
        if(vec[mid]<num)l=mid+1;
        else r=mid;
    }

    if(l<n && vec[l]==num)cout<<l<<endl;//If the target value actually exist
    else cout<<-1<<endl;        //Then it must be in side the l(left)


}
