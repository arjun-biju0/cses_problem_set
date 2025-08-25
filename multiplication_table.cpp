#include<bits/stdc++.h>
using namespace std;

vector<long long> nums;

int check(long long mid, long long k){
    int n=nums.size();
    if(nums[n-1]-nums[0] - mid <= k) return 1;

    //if(ct>=k) return 1;
    return 0;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n,k;
    cin>>n>>k;
    nums.resize(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    long long lo=0;
    long long hi=nums[n-1]-nums[0];
    if(hi==0){
        cout<<hi<<"\n";
        return 0;
    }
    long long ans=hi;
    while(lo<=hi){
        long long mid=(hi+lo)/2;
        if(check(mid,k)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    // if(ans==0) cout<<ans<<"\n";
    cout<<ans<<"\n";

    return 0;
}


