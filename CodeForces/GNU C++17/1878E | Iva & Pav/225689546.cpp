#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
void solve(){
    int n,q;
    cin >> n;
    vector <int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    cin >> q;
    vector <int> l(q+1,0), k(q+1,0);
    for(int i=1;i<=q;i++){
        cin >> l[i] >> k[i];
    }
    vector <vector <int>> pre(n+1,vector<int> (33,0));
    for(int j = 1;j<=32;j++){
        for(int i= 1;i<=n;i++){
            pre[i][j]=pre[i-1][j]+((a[i]>>(j-1))&1);
        }
    }
    for(int i=1;i<=q;i++){
        int low = l[i], high =n, ans =-1;
        while(low<=high){
            int mid = (low+high)/2;
            int sum=0;
            for(int j=1;j<=32;j++){
                if((pre[mid][j]-pre[l[i]-1][j])==(mid-l[i]+1)){
                    sum+= (1<<(j-1));
                }
            }
            if(sum >=k[i]){
                ans = max(ans,mid);
                low=mid+1;
            }
            else{
                high =mid-1;
            }
        }
        cout << ans << " ";
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