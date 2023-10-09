#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector <ll> a(n),b(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    ll min = 1000000000 , min_index , max =1 , max_index;
    for(ll i=0;i<n;i++){
        if(min>=a[i]){
            min = a[i];
            min_index = i;
        }
    }
    for(ll i=0;i<m;i++){
        if(max<=b[i]){
            max = b[i];
            max_index = i;
        }
    }
    ll total = 0;
    if(min<=max){
        a[min_index] = max;
        b[max_index] = min;
    }
    for(int i=0;i<n;i++) total+=a[i];
    if(k>=2){
        if(k%2==0){
            int smallest = *min_element(b.begin(),b.end());
            int largest  = *max_element(a.begin(),a.end());
            total = total - largest + smallest;
        }
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