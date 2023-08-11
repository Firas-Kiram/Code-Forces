#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
#define MP make_pair
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define OUTRET(...) { OUT(__VA_ARGS__); return; }
#define OUT(...) cout << __VA_ARGS__ << '\n'
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<ln;
#define no cout<<"NO"<<ln;
#define sz(v) ((int)((v).size()))
#define ln '\n'
const ll M = 1e6 + 8432;
const ll MOD = 1073741824;
const int N=1e5+5;
bool vis[M];
ll v[M];
ll n,m,ans;
string a,b;

bool check(ll mid){
    for(int i=0;i<n;i++) vis[v[i]] = 0;
    for(int i=0;i<mid;i++){
        vis[v[i]] = true;
    }
    ll i = 0,j = 0;
    while(i<n){
        if(vis[i]){
            i++;
            continue;
        }
        if(a[i]==b[j]){
            j++;
            i++;
        }else i++;
        if(j==m) return true;
    }
    return false;
}


void solve() {
    cin>>a>>b;
    n = sz(a);
    m = sz(b);
    for(int i=0;i<n;i++)cin>>v[i],v[i]--;
    ll l = 0,r = n-1;
    //while(!check(r)) r<<=1;
    while(l<=r){
        ll mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans << ln;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
