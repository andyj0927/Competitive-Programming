#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int sm = min({a,b,c});
    if(a%sm !=0 || b%sm!=0 || c%sm!=0){
        cout << "NO" << endl;
        return;
    }
    int sum = a/sm + b/sm + c/sm;
    if(sum>6) cout << "NO" << endl;
    else cout << "YES" << endl;
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