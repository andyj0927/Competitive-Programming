#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int a[101];
void solve(){
    int n,m;
    string s,t;
    cin >> n >> m;
    cin >> s;
    cin >> t;
    int s1 = 0 , s0 = 0;
    int t1 = 0, t0 = 0;
    char s_val = s[0];
    char t_val = t[0];
    for(int i=1;i<s.length();i++){
        if(s_val==s[i]){
            if(s_val=='0'){
                s0+=1;
            }
            else{
                s1+=1;
            }
        }
        s_val = s[i];
    }
    if(s1==0 && s0==0){
        cout << "YES" << endl;
        return;
    }
    if(s1!=0 && s0!=0){
        cout << "NO" << endl;
        return;
    }
    for(int i=1;i<t.length();i++){
        if(t_val==t[i]){
            if(t_val=='0'){
                t0+=1;
            }
            else{
                t1+=1;
            }
        }
        t_val = t[i];
    }
    if(t1!=0 || t0!=0){
        cout << "NO" << endl;
        return;
    }
    if(s0==0){
        if(t[0]=='0'&&t[t.length()-1]=='0'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        if(t[0]=='1'&&t[t.length()-1]=='1'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}