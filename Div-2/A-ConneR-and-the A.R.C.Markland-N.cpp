#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
        
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        vector <ll> v(c);
        for(auto &t : v){cin>>t;}
        for(int i=0;i<=c;i++){
            if(b - i >= 1 && find(v.begin(),v.end(),b-i)==v.end()){
                cout<<i<<endl;
                break;
            }
            if(b + i <= a && find(v.begin(),v.end(),b+i)==v.end()){
                cout<<i<<endl;
                break;
            }              
        }   
    }
 
 
    return 0;
}