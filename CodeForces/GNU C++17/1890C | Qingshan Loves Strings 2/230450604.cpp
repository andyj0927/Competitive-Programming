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
    string s;
    cin >> n;
    cin >> s;
    deque <int> v;
    vector <int> ans;
    if(n%2==1){
        cout << -1 << endl;
        return;
    }
    int cnt_0 = 0 , cnt_1 = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt_0 +=1;
        else cnt_1 +=1;
    }
    if(cnt_0!=cnt_1){
        cout << -1 << endl;
        return;
    }
    for(int i=0;i<n;i++){
        v.push_back(s[i]-'0');
    }
    int cnt=0, f =0;
    while(!v.empty()){
        if(v.front()==v.back()){
            cnt++;
            if(v.front()==0){
                ans.push_back(v.size()+f);
                v.push_back(0);
                v.pop_front();
                f++;
            }
            else{
                ans.push_back(f);
                v.push_front(1);
                v.pop_back();
                f++;
            }
        }
        else{
            v.pop_back();
            v.pop_front();
            f++;
        }
    }
    cout << cnt << endl;
    for(int i=0;i<cnt;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
 
 
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