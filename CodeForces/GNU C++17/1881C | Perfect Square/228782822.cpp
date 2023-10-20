#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
char a[1001][1001];
void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int tot=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            int mx = max({int (a[i][j]),int(a[j][n-1-i]),int(a[n-1-i][n-1-j]),int(a[n-1-j][i])});
            int ans = 4 * mx - int(a[i][j]) - int(a[j][n-1-i]) -int(a[n-1-i][n-1-j]) -int(a[n-1-j][i]);
            tot+=ans;
        }
    }
    cout << tot << endl;
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