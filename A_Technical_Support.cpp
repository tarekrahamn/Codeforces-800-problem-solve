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
        stack <char>q;
        for(int i = 0; i < n; i++){
            if(s[i]=='Q'){
                q.push(s[i]);
            }else{
                if(!q.empty()){
                    q.pop();
                }
            }
        }
        if(q.empty()){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}