#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 1; i <= n; i++) a[i-1]=i;
	while(1){
		for(int t = 0; t < n; t++) cout<<a[t];
				cout<<endl;
		int flag = 0;
		for(int i = n-1;i > 0; i--){
			if(a[i]>a[i-1]){
				int tmp=i-1;
				flag = 1;
				for(int j = n-1; j>i-1; j--){
					if(a[j]>a[tmp]) {
						swap(a[j], a[tmp]);
						break;
					}
				}
				//sap xep
			//	sort(a+tmp,a+n);
			for(int k=i; k<n-1; k++){
				for(int v = i; v < n-1; v++) {
					if(a[v] > a[v+1]) swap(a[v], a[v+1]);
				}
			}
				//in cau hinh
//				for(int t = 0; t < n; t++) cout<<a[t]<<' ';
//				cout<<endl;
				break;
			}
		}
		if(flag == 0) return 0;
	}
}
 
