#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
void solve(){
    int n;
    cin >> n;
    vector <ll> s(n), e(n);
    for(int i=0;i<n;i++){
        cin >> s[i] >> e[i];
    }
    ll low = 1, high = s[0], answer = s[0];
    while(low<=high){
        ll mid = (low+high) / 2;
        int ans = 1;
        for(int i = 1; i<n;i++){
            if((mid<=s[i])&&(e[i]>=e[0])){
                ans = 0;
                break;
            }
        }
        if(ans){
            answer = min(answer,mid);
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(answer == s[0]){
        for(int i = 1; i<n;i++){
            if((s[0]<=s[i])&&(e[i]>=e[0])){
                cout << -1 << "\n";
                return;
            }
        }
    }
    cout << answer << "\n";
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