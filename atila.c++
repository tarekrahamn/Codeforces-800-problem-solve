#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        string str;
        cin>> str;
        sort(str.begin(),str.end());
         char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char count= str[n- 1];
        for(int i=0;i<26;i++){
            if(count==arr[i]){
                cout<<i+ 1<<endl;
            }
        }
    }
  return 0;
}