#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n+1,0);
    ll ans = 0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=2;i<n;i++){
        if(a[i]>0) ans+=a[i];
    }
    ans+=max({ll(0) ,a[0],a[0]+a[1]});
    cout << ans << "\n";
 
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