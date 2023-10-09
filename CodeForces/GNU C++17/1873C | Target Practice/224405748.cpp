#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
        int arr[100]={0};
        for(int i =0;i<10;i++){
            string s;
            cin >> s;
            for(int j = 0;j<10;j++){
                if(s[j]=='X') arr[i*10+j] = 1;
            }
        }
        int sum=0;
        for(int i=0; i<100;i++){
            if(arr[i]==1){
                if(i==44 || i==45 || i==54 || i==55) sum+=5;
                else if((i>=33 && i<=36)||(i>=63 && i<=66)|| i == 43 || i == 53 || i==46 || i==56) sum+=4;
                else if((i>=22 && i<=27)||(i>=72 && i<=77)||i==32||i==42||i==52||i==62||i==72||i==27||i==37||i==47||i==57||i==67) sum+=3;
                else if((i%10)==0 || (i>=0 && i<=10) || (i>=90 && (i<=99)) || ((i-9)%10)==0) sum+=1;
                else sum+=2;
            }
        }
        cout << sum << "\n";
    }
}