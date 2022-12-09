#include<bits/stdc++.h>
using namespace std;
void advantage(){
    int t;
        cin>>t;
        int arr[t];
        int max[t];
        for(int i=0;i<t;i++){
            cin>>arr[i];
            max[i]=arr[i];
        }
        sort(max, max+ t);//sort just max[t] array
        for(int i=0;i<t;i++){
            if(arr[i]!=max[t - 1]){
                cout<<arr[i]-max[t - 1]<<" "; 
            }
            else{
                cout<<arr[i]-max[t - 2]<<" ";//Becuse arr[i] nije akta n-1
            }
        }
        cout<<endl;
    }
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        advantage();
    }
    return 0;    
}
