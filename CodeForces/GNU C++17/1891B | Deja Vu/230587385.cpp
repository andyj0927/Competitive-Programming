#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int n,q;
vector <ll> a;
vector <int > x;
int xval[32];
void solve(){
    cin >> n >> q;
    a.clear();
    x.clear();
    fill(xval,xval+32,0);
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        a.push_back(m);
    }
    for(int i=0;i<q;i++){
        int m;
        cin >> m;
        if(xval[m]==0){
            x.push_back(m);
            xval[m]+=1;
        }
    }
    for(int i=0;i<x.size();i++){
        ll q = pow(2,x[i]);
        for(int j=0;j<n;j++){
            if(a[j]%q==0){
                a[j]+=q/2;
            }
        }
    }
    for(int i =0;i<n;i++){
        cout << a[i] << " ";
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