#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cntm=0,cnts=0;
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+2] && s[i]=='1'){
                s[i+1]='1';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1') cntm++;
        }
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+2] && s[i]=='1'){
                s[i+1]='0';
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnts++;        
        }
        cout << cnts << " " << cntm << endl;
    }
    return 0;
}