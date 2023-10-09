#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<pair<long long , int> >  a(n);
        vector <int> ans(n);
        for(int i=0;i<n;i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            ans[a[i].second]=i+1;
        }
        for(int i=0;i<n;i++){
            cout << ans[i] <<" ";
        }
        cout << "\n";
    }
}