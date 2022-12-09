#include<bits/stdc++.h>
using namespace std;
void solve (){
        int n;
        cin>>n;
        int a[n];
        //vector<int>a(n);
        for(int i=0;i<n;i++) 
        cin>>a[i];
        string s;
        cin>>s;
        
        map<int,char>mp;
        for(int i=0;i<n;i++){
            if(mp.count(a[i]) && mp[a[i]] != s[i]){
                cout<<"NO"<<"\n";
                return;
            }
            else if(mp.count(a[i])==0){
                mp[a[i]]=s[i];
            }
        }
        cout<<"YES"<<"\n";
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
    
            solve();
        }
        return 0;
    }