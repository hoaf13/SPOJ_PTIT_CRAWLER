#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
ll F[200], KQ[111][111];
int main(){
//	ios::sync_with_stdio(false);
	F[1] = 1; F[2] = 0;
	for (int i = 2; i*i <= 100; i++) {
		if(F[i]) continue;
		for (int j = i*i; j <= 100; j += i) if(F[j] == 0) F[j] = i; 
	}
	for (int i = 1; i <= 100; i++) if(F[i] == 0) F[i] = i;
	int a[200];
	for (int i = 0; i <= 100; i++){
		for (int j = i; j <= 100; j++){
			for (int k = 2; k <= 100; k++) a[k] = 0;
			ll dem = 1;
		//	cout << "big";
			for (int o = i+1; o <= j; o++){
				int tmp = o;
				//cout << "bug";
				while(tmp != 1){
				//cout << 404;
				a[F[tmp]]++;
				//cout << 4 ;
				tmp /= F[tmp];
			//	cout << 4
			//	cout << tmp << ' ';
				}
			}
			for (int t = 2; t <= 100; t++) dem *= (a[t]+1);
			KQ[i][j] = dem;
		//	}
		}
		
	}
	ll T; cin >> T;
	while(T--){
		int A, b; cin >> A >> b;
		cout << KQ[A][b] << endl;
	}
}
 
