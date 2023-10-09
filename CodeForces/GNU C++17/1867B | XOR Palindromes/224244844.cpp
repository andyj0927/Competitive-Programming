#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    string s;
    cin >> t;
    while(t--){
        int c=0;
        cin >> n;
        cin >> s;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]) c++;
        }
        for(int i=0;i<c;i++) cout << 0;
        for(int i=c;i<=n-c;i++){
            if((n%2==0)&& (i-c)%2==0 ){
                cout << 1;
            }
            else if(n%2==1) cout << 1;
            else{
                cout << 0;
            }
        }
        for(int i=n-c+1;i<=n;i++) cout << 0;
        cout << "\n";
    }
}