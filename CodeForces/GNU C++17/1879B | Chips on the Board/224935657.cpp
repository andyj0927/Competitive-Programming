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
    vector <ll> a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ll a_min = *min_element(a.begin(),a.end());
    ll b_min = *min_element(b.begin(),b.end());
    ll ans1= a_min*n, ans2= b_min*n , ans;
    for(int i=0;i<n;i++){
        ans1+=b[i];
    }
    for(int i=0;i<n;i++){
        ans2+=a[i];
    }
    ans = min(ans1, ans2);
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