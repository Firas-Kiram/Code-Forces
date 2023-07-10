#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<endl;  
#define no cout<<"NO"<<endl;
#define sz(v)               ((int)((v).size()))


void search(int k,int n,vector <ll>& s, vector <ll>& a,vector<vector<ll>>& l) {
    if (k == n ) {
        l.push_back(s);
    } else {
        search(k+1,n, s, a,l);
        s.push_back(a[k]);
        search(k+1,n, s, a,l);
        s.pop_back();
    }
}

void solve() {
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    vector <ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector <vector <ll>> a;
    vector <ll> s;
    search(0,n,s,v,a);
    ll cnt=0;
    for(auto g : a){
        ll min_q = 1e12;
        ll max_q = 0;
        for (auto d : g) {
            min_q = min(min_q, d);
            max_q = max(max_q, d);
        }
        bool ok = true;
        if(sz(g)>=2){
             if((max_q-min_q)>=x){
                ll sum = 0;
                for(int i=0;i<sz(g);i++){
                    sum+=g[i];
                }
                if(sum > r || l > sum) ok = false;
                if(ok) cnt++;
             }  

        }
}
    cout<<cnt<<endl;
}


int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
 
    int T = 1;
    //cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
