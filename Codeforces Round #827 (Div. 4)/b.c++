#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;                  
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int str[x];
        for(int i =0;i<x;i++)
        {
            cin>>str[i];
        }
        if(x==1){
            cout<<"YES"<<endl;
        }
        else
        {
            int flag =0;
            for(int i=0;i<x;i++){
                for(int j=i+1;j<x;j++){
                    if(str[i]==str[j]){
                        flag = 1;
                        break;
                    }
                }
            }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        }
    }
    return 0;
}