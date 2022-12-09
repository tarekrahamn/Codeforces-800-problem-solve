#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int blank;
        int len;
        cin >> len;
        int str[len];
        for(int i=0;i<len;i++)
        
            cin >> str[i];
             blank = 10-len;
            blank = blank*(blank-1)/2;
            blank = 6*blank;
        cout << blank << endl;
    }
    return 0;
}