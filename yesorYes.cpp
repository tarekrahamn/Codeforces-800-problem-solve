#include <bits/stdc++.h>
using namespace std;
void solve() {
	string s;
	cin >> s;
	if (s[0] != 'y' && s[0] != 'Y')
	{
		cout << "NO\n";
	}
	else if (s[1] != 'e' && s[1] != 'E')
	{
		cout << "NO\n";
	}
	else if (s[2] != 's' && s[2] != 'S')
	{
		cout << "NO\n";
	}
	else
	{
		cout << "YES\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}