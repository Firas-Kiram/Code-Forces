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
const ll MOD = 1073741824;

void solve() {
    ll a,x,y;
    cin >> a >> x >> y;
    if(y%a==0){
        cout << -1 << ln;
    }else{
        if( y > 0 && y < a*2 ){
            if( x < static_cast<double>(a)/2 && x > (-1)*static_cast<double>(a)/2 ){
                cout << y / a + 1 << ln;
            }else{
                cout << -1 << ln;
            }
        }else{
            if((y/a)%2==0){
                if( x==0 || x>=a || x <= -a){
                    cout << -1 << ln;
                    return;
                }
                ll p = y/a;
                if( x < static_cast<double>(a) && x > (-1)*static_cast<double>(a) ){
                    ll c = (y/a)/2;
                    if((x-a) < a*(-1)){
                        cout << y/a  + c<< ln;
                    }else{
                        cout << y/a + 1 + c << ln;
                    }
                }
            }else{
                if( x >= static_cast<double>(a)/2 || x <= - static_cast<double>(a)/2){
                    cout << -1 << ln;
                    return;
                }
                ll p = (y/a)/2;
                cout << y/a + p + 1 << ln;
            }
        }
    }
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
