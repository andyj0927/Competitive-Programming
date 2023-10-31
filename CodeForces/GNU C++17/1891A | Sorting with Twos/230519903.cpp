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
    vector <int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int nm = 1, y= 1;
    bool ans = true;
    while(nm<a.size()){
        for(int i=0;i<y-1;i++){
            if(nm+i>=a.size()-1){
                break;
            }
            if(a[nm+i]>a[nm+i+1]){
                ans = false;
            }
        }
        nm+=y;
        y*=2;
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