#include<bits/stdc++.h>

using namespace std;

int main(){	
	int ans = 0;
	int data = 0;
	vector<int> n;
	for(int i =0; i < 60;i++){
		cin >> data;
		n.push_back(data);
		if(i%3 == 0){
			ans += n[i];
		}else if(i%3 == 1 ){
			ans += n[i];
		}else if(i%3 == 2){
			ans -= n[i];
		}
	}
	cout << ans << endl;
	return 0;
}
