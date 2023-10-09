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
    cin >> n;
    vector <int> a(n+1,0);
    a[1] = 1;
    a[2] = 3;
    int count = 4;
    for(int i=1;i<=n;i++){
        if(i==1) cout << a[1] << " ";
        else if(i==2) cout << a[2] << " ";
        else{
            while((3*count) %(a[i-1]+a[i-2]) == 0) count++;
            a[i] = count;
            cout << a[i] << " ";
            count++;
        }
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