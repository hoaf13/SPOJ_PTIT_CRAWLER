#include<iostream>
#include<algorithm>
//#include<math.h>
using namespace std;
long long a[20], b[20], c[20], n, k = 1, Min = 1000000000, stop = 1;
void khoitao(){
	for(int i = 1; i <= k; i++) c[i] = i;
}
void in(){
	for(int i = 1; i <= k; i++) cout << c[i];
	cout << endl;
}
long long tinh(){
	long long S = 1, P = 0;
	for(int i = 1; i <= k; i++) {
		S *= a[c[i]];
		P += b[c[i]];
	}
	if(S >= P) return S-P;
	return P-S;
 
}
void sinh(){
	int i = k;
	while(i > 0 && c[i] == n - k + i) i--;
	if(i == 0) stop = 0;
	else{
		c[i]++;
		for(int  j = i; j < k; j++) c[j+1] = c[j] + 1;
	}
}
int main(){
 
	
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];
	while(k <= n) {
	//	cout << k << endl;
		khoitao();
		while(stop) {
			if(tinh() < Min) Min = tinh();
		//	in();
			sinh();
		}
		stop = 1;
		k++;
	}
	cout << Min;
}
 
