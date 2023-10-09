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
        int a[10]={0};
        int max = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            a[i]+=1;
            int sum = 1;
            for(int j=0;j<n;j++){
                sum*= a[j];
            }
            if(sum>max){
                max = sum;
            }
            a[i]-=1;
        }
        cout << max << "\n";
        
    }
}