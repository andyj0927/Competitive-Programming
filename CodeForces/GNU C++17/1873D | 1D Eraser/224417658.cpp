#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s;
        cin >> n >> k;
        cin >> s;
        int i=0, count=0;
        while(i<n){
            if(s[i]=='B'){
                count++;
                i+=k;
            }
            else{
                i+=1;
            }
        }
        cout << count << "\n";
        
    }
}