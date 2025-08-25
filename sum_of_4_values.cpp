#include<bits/stdc++.h>
using namespace std;
vector<long long> nums;

vector<int> fourSum3(long long n, long long target){
    map<long long,pair<int,int>> mpp;
    for(int b=n-2;b>=1;b--){
        for(int a=b-1;a>=0;a--){
            if(mpp.find(target-nums[a]-nums[b])!=mpp.end()){
                pair<int,int> cd=mpp[target-nums[a]-nums[b]];
                return {a+1,b+1,cd.first+1,cd.second+1};
            }
        }
        int c=b;
        for(int d=c+1;d<n;d++){
            mpp[nums[c]+nums[d]]={c,d};
        }
    }
    return {};
}

void solve(){
    long long n,target;
    cin>>n>>target;
    nums.resize(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> ans= fourSum3(n,target);
    if(ans.size()==0){
        cout<<"IMPOSSIBLE"<<"\n";
        return;
    }
    for(auto it: ans) cout<<it<<" ";
    cout<<"\n";
    //cout<<fourSum4(n,target)<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    while(t){

        solve();
        t--;
    }
    return 0;
}

