#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    int n;
    cin >> n;
    vector <int> a(n+1);
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(num<=n) a[num]++;
    }
    int mex=0;
    while(a[mex]) mex++;
    vector <ll> d(mex+1,9223372036854775807);
    d[mex] = 0;
    for(int i=mex-1;i>=0;i--){
        for(int j=i+1;j<=mex;j++){
            d[i] = min(d[i],d[j]+j*(a[i]-1)+i);
        }
    }
    
    cout << d[0] << endl;
    
 
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