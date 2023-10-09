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
    if(n>=1 && n<=6) cout << "NO"  << endl;
    else if(n==9) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        if(n%3==0){
            cout << 1 << " " << 4 << " " << n-5 << endl;
        }
        else{
            cout << 1 << " " << 2 << " " << n-3 << endl;
        }
    }
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