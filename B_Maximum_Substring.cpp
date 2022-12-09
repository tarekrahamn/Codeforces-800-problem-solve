#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long  int n;
        cin >> n;
        string s;
        cin >> s;
        long long int one = count(s.begin(),s.end(),'1');
        long long int zero = count(s.begin(),s.end(),'0');
        long long int ans = one * zero;
        long long int count = 0 ;
        for(int i = 0; i<n ; i++){
            count++;
            if(i == n-1 || s[i+1]!=s[i]){
                ans = max(ans,count*count);
                count = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}