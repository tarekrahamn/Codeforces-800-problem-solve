#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s; 
    cin >> s;
 
    string answer = "Yes";
    int i = 0;
    if (s[0] == 'Y')
        i = 1;
    else if (s[0] == 'e')
        i = 2;
    else if (s[0] != 's') {
        cout << "NO\n";
        return;
    }
 
    for (int j = 1; j < s.size(); j++) {
        if (s[j] != answer[i++]) {
            cout << "NO\n";
            return;
        }
        if (i == 3)
            i = 0;
    }
 
    cout << "YES\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}