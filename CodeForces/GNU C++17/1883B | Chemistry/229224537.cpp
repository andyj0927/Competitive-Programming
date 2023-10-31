#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int a[27];
void solve(){
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
    for(int i=0;i<27;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        int nm = s[i]-'a';
        a[nm]++;
        if(a[nm]==2){
            a[nm]=0;
        }
    }
    int sum=0;
    for(int i=0;i<27;i++){
        sum+=a[i];
    }
    if((n-k)%2==0){
        if(k>=sum && (k-sum)%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        if((k+1)>=sum && (k+1-sum)%2==0){
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