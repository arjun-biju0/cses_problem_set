
#include<bits/stdc++.h>
using namespace std;
vector<long long> nums;

int check(long long mid, long long t){
    long long ct=0;
    for(long long i=0;i<nums.size();i++){
        ct+= mid/nums[i];
    }
    if(ct>=t) return 1;
    return 0;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n,t;
    cin>>n>>t;
    long long lo=1;
    nums.resize(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    long long hi= nums[0]*t;
    long long ans=hi;
    while(lo<=hi){
        long long mid=lo+ (hi-lo)/2;
        if(check(mid, t)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans<<"\n";


    return 0;
}

