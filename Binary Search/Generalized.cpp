#include<bits/stdc++.h>
using namespace std;

vector<int>vec = {8,7,6,5,4,3,2,1,9,10,11,12,13,14,15,16,17,18,19,20};
bool isOk(int x){
if(vec[0]>vec[x])return true;
else return false;

}


int main()
{

    int n = vec.size();
    int l = 0;
    int r = n-1;
    int ans = -1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(isOk(mid)){
            l=mid+1;
            ans = mid;
        }
        else r = mid-1;

    }

    cout<<ans<<endl;




}
