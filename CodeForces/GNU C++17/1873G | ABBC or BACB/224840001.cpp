#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        vector <int> a;
        int count = 0 , answer = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                a.push_back(count);
                count = 0;
            }
            else{
                count++;
            }
        }
        a.push_back(count);
        for(int i: a) answer+=i;
        answer -= *min_element(a.begin(),a.end());
        cout << answer << "\n";
    }
}