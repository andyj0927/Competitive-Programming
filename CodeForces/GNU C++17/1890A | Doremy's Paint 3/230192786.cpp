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
    int n;
    cin >> n;
    int cnt = 0;
    int x , y = -1 , cntx=0,cnty=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    x= a[0];
    for(int i=1;i<n;i++){
        if(a[i]!=x){
            y= a[i];
            break;
        }
    }
    if(y==-1) cout << "YES" << endl;
    else{
        for(int i=0;i<n;i++){
            if(a[i]==x){
                cntx+=1;
            }
            else if(a[i]==y){
                cnty+=1;
            }
            else{
                cout << "NO" << endl;
                return;
            }
 
        }
        if(abs(cntx-cnty)==1 || abs(cntx-cnty)==0){
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
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}