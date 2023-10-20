#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
void solve(){
    int n,m;
    string x, s;
    cin >> n >> m;
    cin >> x >> s;
    int cnt = 0;
    while(true){
        if(x.find(s)!=string::npos){
            break;
        }
        if(x.length()>s.length()*25){
            cnt=-1;
            break;
        }
        x+=x;
        cnt++;
    }
    cout << cnt << endl;
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