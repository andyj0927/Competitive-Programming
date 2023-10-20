#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int a[200001],d[200003];
void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    fill(d,d+n+1,0);
    d[n]=0;
    for(int i=n-1;i>=0;i--){
        if(i+a[i]+1>n){
            d[i]=d[i+1]+1;
        }
        else{
            d[i] = min(d[i+1]+1,d[i+a[i]+1]);
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