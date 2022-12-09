#include<bits/stdc++.h>
using namespace std;
#define st unordered_set
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    string res = "";
	    st<string>s;
	    res=str[0];
	    int l,mx,sum;
	    l=mx=0;
	    sum=1;
	    for(int i=1; i<n; i++){
	        if(str[i-1]!=str[i]){
	            if(mx<sum){
	                mx = sum;
	                mx--;
	            }
	            if(s.find(res)!=s.end())
	            l = max(l, sum);
	            s.insert(res);
	            res = str[i];
	            sum=1;
	        }
	        else{
	            sum++;
	            res+=str[i];
	        }
	    }
	    if(s.find(res)!=s.end()){
	        l = max(l, sum);
	    }
	    else{
	        if(mx<sum){
	          mx = sum;
	          mx--;
	         }
	    }
	    int ans = max(l, mx);
	    cout<<ans<<endl;
	}
	return 0;
}