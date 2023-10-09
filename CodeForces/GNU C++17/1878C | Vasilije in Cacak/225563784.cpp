#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    ll n, k;
    ll x;
    cin >> n >> k >> x;
    ll min=0 , max=0;
    min = (k+1)*k/2;
    max = (n+1)*k - min;
    if((x>=min) && (x<=max)) cout << "YES" << endl;
    else cout << "NO" << endl;
 
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