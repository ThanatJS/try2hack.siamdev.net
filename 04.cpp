#include<bits/stdc++.h>

using namespace std;

int main(){
	string s = "9876543210ABCDEFGHIJKLMNOPQRSTUVWXYZzyxwvutsrqponmlkjihgfedcba";
	string t = "";
	string ans = "";
	int pos = 0;
	cin >> t;
	for(int i =0,tt = 0;i < t.size();i++,tt++){
		ans += s[s.find(t[i])+tt+1];
		if(tt == 25){
			tt = -1;
		}
	}
	cout << ans << endl;
	return 0;
}
