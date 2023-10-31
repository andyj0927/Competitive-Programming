#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll a[12];
void solve(){
    int n,k;
    cin >> n >> k;
    for(int i=0;i<=10;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        int f;
        cin >> f;
        a[f]++;
    }
    int ans = 10;
    ll b[4]={0,0,0,0};
    if(k!=4){
        for(int i=1;i<=10;i++){
            if(a[i]!=0){
                for(int j=k;j<=15;j=j+k){
                    if(j-i>=0) ans=min(ans,abs(i-j));
                }
            }
        }
        cout << ans << endl;
    }
    else{
        for(int i=1;i<=10;i++){
            if(a[i]!=0){
                b[i%4] += a[i];
            }
        }
        if(b[0]!=0){
            cout << 0 << endl;
        }
        else if(b[2]>=2){
            cout << 0 << endl;
        }
        else if(b[3]!=0){
            cout << 1 << endl;
        }
        else if(b[2]==1 && b[1]!=0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
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