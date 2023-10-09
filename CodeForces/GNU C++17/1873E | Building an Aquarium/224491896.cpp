#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n,x,t, h=0;
        cin >> n >> x;
        vector <long long> a(n);
        for(long long i=0;i<n;i++){
            cin >> a[i];
        }
        long long low = 1, high = 2000000001;
        while(low<=high){
            long long i=(low+high)/2;
            long long sum=0;
            for(long long j=0;j<n;j++){
                if(i>a[j]) sum+=(i-a[j]);
            }
            if(sum<=x){
                low = i+1;
            }
            else{
                high = i-1;
            }
        }
        cout << high << "\n";
        
    }
}