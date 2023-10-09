#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    int n,k;
    bool ans = false;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a==k) ans = true;
    }
    if(ans) cout << "YES" << endl;
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