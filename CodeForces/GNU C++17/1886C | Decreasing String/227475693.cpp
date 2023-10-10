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
    ll pos , n , m, x; // m개 제거 x번째
    cin >> s;
    cin >> pos;
    n = s.length();
    for(ll i=n;i>=1;i--){
        pos=pos-i;
        if(pos<=0){
            m=n-i;
            x=pos+i-1;
            break;
        }
    }
    vector <char> st;
    st.push_back(s[0]);
    ll del = 0;
    for(int i=1;i<n;i++){
        while( st.size() && s[i]<st.back() && del<m){
            st.pop_back();
            del++;
        }
        st.push_back(s[i]);
    }
    cout << st[x];
    
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