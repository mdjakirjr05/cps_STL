#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--){
		int N, X;
		cin>>N>>X;
		vector<int> D(N);
		int distinct = 0;
		while(N--){
			int A;
			cin>>A;
			D.push_back(A);
		}
		sort(D.begin(), D.end());
		int sizeUntill = unique(D.begin(), D.end()) - D.begin();
    if(X<sizeUntill-1) cout<<"Average"<<endl;
		else if(X==sizeUntill-1) cout<<"Good"<<endl;
		else cout<<"Bad"<<endl;
	}
	return 0;
}