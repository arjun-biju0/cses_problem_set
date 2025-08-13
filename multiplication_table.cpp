#include<bits/stdc++.h>
using namespace std;
long long n;
vector<int> nums;
int check(long long mid, long long k){
    long long ct=0;
    for(long long i=1;i<=n;i++){
        ct+= min(n,mid/i);
    }

    if(ct>=k) return 1;
    return 0;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;

    long long lo=1;
    long long hi=n*n;
    long long ans=hi;
    long long k= (n*n)/2 +1;
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


