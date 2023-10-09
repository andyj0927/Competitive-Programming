#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
double h(double x1, double y1 , double x2, double y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
 
void solve(){
    double px,py,ax,ay,bx,by, ans = 4000;
    cin >> px >> py >> ax >> ay >> bx >> by;
    double low = 0, high = 4000;
    while(low+0.000000001<=high){
        double mid = (low+high)/2;
        if(h(px,py,ax,ay)<=mid && h(0,0,ax,ay)<=mid){
            ans = min(ans,mid);
            high = mid;
        }
        else if(h(px,py,bx,by)<=mid && h(0,0,bx,by)<=mid){
            ans = min(ans,mid);
            high = mid;
        }
        else if(h(px,py,ax,ay)>mid && h(px,py,bx,by)>mid){
            low =mid;
        }
        else if(h(0,0,ax,ay)>mid && h(0,0,bx,by)>mid){
            low = mid;
        }
        else if(h(ax,ay,bx,by)>2*mid){
            low = mid;
        }
        else{
            ans = min(ans,mid);
            high = mid;
        }
    }
    cout << std ::setprecision(17);
    cout << ans << endl;
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