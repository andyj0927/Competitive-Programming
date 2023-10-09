#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if(s=="abc" || s=="acb" || s=="bac" || s=="cba") cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}