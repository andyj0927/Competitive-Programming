#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int a[10001], c[1000001];
void solve(){
    int n;
    cin >> n;
    vector <int> cont;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    fill(c,c+1000001,0);
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                cont.push_back(j);
            }
            while(a[i]%j==0){
                a[i]/=j;
                c[j]++;
            }
        }
        if(a[i]>1){
            c[a[i]]++;
            cont.push_back(a[i]);
        }
    }
    for(int i:cont){
        if(c[i]%n!=0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
 
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