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
#define sz(v) ((int)((v).size()))

//const ll size_arr = 1e6 + 8432;
//ll c[size_arr];

void solve() {
    ll n;
    cin>>n;
    vector <vector<ll>> v(n);
    for(int i=0;i<n;i++){
        ll z;
        cin>>z;
        for(int j=0;j<z;j++){
            ll m;
            cin>>m;
            v[i].pb(m);
        }
    }
    vector <ll> c(n,-1);
    set <ll> used;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<sz(v[i]);j++){
            if(used.count(v[i][j])==0){
                c[i] = v[i][j];
                used.insert(v[i][j]);
            }
        }
        if(c[i]==-1){
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i : c){
        cout<<i<<' ';
    }
    cout<<endl;


}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
