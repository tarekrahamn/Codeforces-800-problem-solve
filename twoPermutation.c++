#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, b; 
    cin >> n ;
    cin >> a >> b;
    if(a == b && b == n) 
    {
        cout << "Yes" << endl;
    }
    else if(a+b <= n-2) 
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    } 
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}