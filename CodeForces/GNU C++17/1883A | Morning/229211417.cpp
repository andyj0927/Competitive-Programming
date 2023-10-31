#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void solve(){
    string s;
    cin >> s;
    char be = '1';
    int ans = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            s[i]=':';
        }
    }
    for(int i=0;i<s.length();i++){
        int n = abs(s[i]-be);
        be=s[i];
        ans+=n;
    }
    cout << ans+4 << endl;
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