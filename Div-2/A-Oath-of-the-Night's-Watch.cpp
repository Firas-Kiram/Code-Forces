#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define sz(v)               ((int)((v).size()))
 
 ll MX = 0;
 ll MN = 10000000000; 
 
void solve() {
    ll n;
    cin>>n;
    map <ll,ll> mpp;
    ll s = 0;
    for(int i=0;i<n;i++){
        ll c;
        cin>>c;
        if(MX<c) MX = c;
        if(MN>c) MN = c;
        mpp[c]++;
    }
    for(auto j : mpp){
        s+=j.S;
    }
    if(sz(mpp)<=2){
        cout<<0<<endl;
    }else{    
    s -= mpp[MX];
    s -= mpp[MN];
    cout<<s<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
 
    int T = 1;
//    cin >> T;
    while(T--) {
        solve();
    }
 
    return 0;
}
