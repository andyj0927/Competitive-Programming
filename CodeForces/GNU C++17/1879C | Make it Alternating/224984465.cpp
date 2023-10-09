#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
ll f(ll x){
    if(x==0){
        return 1;
    }
    return (x*f(x-1)) % 998244353;
}
void solve(){
    string s;
    cin >> s;
    ll count=1 ,ans=1 , del=0;
    char a = s[0];
    int n = s.length();
    for(int i =1; i<n;i++){
        if(a!=s[i]){
            ans *=count;
            ans%=998244353;
            count = 1;
            a=s[i];
        }
        else{
            count++;
            del++;
        }
    }
    ans*=count;
    ans%=998244353;
    ans*=f(del);
    ans%=998244353;
    cout << del << " " << ans << "\n"; 
}
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}