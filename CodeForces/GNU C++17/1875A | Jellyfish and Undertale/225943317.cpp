#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    ll a,b,n;
    cin >> a >> b >> n;
    ll y, total =b;
    for(ll i=0;i<n;i++){
        cin >> y;
        total+= min(a-1,y);
    }
    cout << total << endl;
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