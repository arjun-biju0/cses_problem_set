
#include<bits/stdc++.h>
using namespace std;
vector<long long> nums;

int check(long long mid, long long k){
    long long ct=1;
    long long sum=0;
    for(long long i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>mid){
            ct++;
            sum=nums[i];
        }
    }
    if(ct<=k) return 1;
    return 0;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n,k;
    cin>>n>>k;
    nums.resize(n);
    long long hi=0;
    long long lo=-1;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        hi+=nums[i];
        lo=max(lo,nums[i]);
    }
    long long ans=lo;
    while(lo<=hi){
        long long mid=lo+ (hi-lo)/2;
        if(check(mid, k)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans<<"\n";


    return 0;
}

