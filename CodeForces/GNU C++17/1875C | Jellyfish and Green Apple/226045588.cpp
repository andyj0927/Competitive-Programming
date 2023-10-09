#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    ll n,m;
    cin >> n >> m;
    ll s =n, r =m;
    ll sol = 1;
    ll temp;
    if(s<r){
        temp = s;
        s = r;
        r = temp;
    }
    ll rr;
    while(r!=0){
        rr = s%r;
        s = r;
        r = rr;
    }
    ll gcd = s;
    n = n/gcd;
    m = m/gcd;
    sol*=gcd;
    r= m;
    while(r%2==0){
        r = r/2;
    }
    if(r!=1){
        cout << -1 << endl;
        return;
    }
    if(m==1){
        cout << 0 << endl;
        return;
    }
    n=n%m;
    ll ans = 0;
    while(n!=1){
        ll mul=2;
        while(mul*n<m){
            mul*=2;
        }
        ll minus = m/mul;
        n-=minus;
        ans+=(minus)*(mul-1);
    }
    ans+=m-1;
    ans = sol*ans;
    cout << ans << endl;
 
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