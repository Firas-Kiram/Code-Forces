#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<ln;
#define no cout<<"NO"<<ln;
#define sz(v) ((int)((v).size()))
#define ln '\n'
const ll M = 1e6 + 8432;
ll arr[M],cum_s[M];
void solve() {
    string s;
    ll n,m;
    cin >> n >> m >> s;
    ll r=0,l=0,cnt=0,max_q=0;
    char c{};
    c = 'a';
    while(r < s.length()){
        if(c!=s[r]){
            cnt++;
        }
        if(cnt <= m){
            max_q = max(max_q,r-l+1);
        }
        else{
            if(s[l]!=c){
                cnt--;
            }
            l++;
        }
        r++;
    }
    c = 'b';
    r = 0 , l = 0 , cnt = 0;
    while(r < s.length()){
        if(c!=s[r]){
            cnt++;
        }
        if(cnt <= m){
            max_q = max(max_q,r-l+1);
        }
        else{
            if(s[l]!=c){
                cnt--;
            }
            l++;
        }
        r++;
    }
    cout << max_q << ln;
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