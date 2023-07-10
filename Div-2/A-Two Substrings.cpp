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



void solve() {
    string s;
    cin>>s;
    string c{};
    vector <pi> ab,ba;
    int x=0,y=0,cnt=0;
    for(int i=0;i<sz(s);i++){
        c+=s[i];
        if(c.length()>=2 && (c.substr(sz(c)-2,2)=="AB")){
             ab.pb({i-1,i});
        }
        if(c.length()>=2 && (c.substr(sz(c)-2,2)=="BA")){
             ba.pb({i-1,i});
        }
    }
    for(auto i : ab){
        for(auto j : ba){
            if(i.F != j.F && i.S != j.S && i.F != j.S && i.S != j.F){
                cnt++;
                break;
            }

        }
        if(cnt!=0) break;
    }
   cout << ((cnt != 0) ? "YES" : "NO") << endl;
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
