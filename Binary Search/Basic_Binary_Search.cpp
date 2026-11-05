#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = { 1,2,3,4,5,5,5,6,7,8,9,9,9,9,9,9,9,9,9,10};
    int n = vec.size();
    int l=0;
    int r = n-1;
    int num;
    cin>>num;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(vec[mid]<num)l=mid+1;
        else if(vec[mid]>num)r=mid-1;
        else
        {
            cout<<mid<<endl;
            return 0;
        }
    }
 cout<<-1<<endl;


}
