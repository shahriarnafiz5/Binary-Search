#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec = {1,2,3,4,5,5,5,6,7,9,9,9,9,9,9,9,9,9,10};
    int n = vec.size();
    int l=0;
    int r = n-1;
    int num;
    cin>>num;
    int ans = -1;

    while(l<=r){
        int mid = (l+r)/2;
        if(vec[mid]<=num) l = mid+1;
        else{
            r = mid-1;
            ans = mid;
        }
    }

    if(ans==-1)cout<<n<<endl;
    else cout<<ans<<endl;


}

