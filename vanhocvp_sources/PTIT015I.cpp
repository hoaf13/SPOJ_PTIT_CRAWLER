#include<iostream>
 
using namespace std;
 
int main(){
	int T;
	cin>>T;
	while(T--){
		int a,b;
		cin>>a>>b;
		int K[a];
		int sum=0;
		int dem=0;
		for(int i=0;i<a;i++) cin>>K[i];
		for(int i=0;i<a;i++){
			if((sum+K[i])<=b){
				dem++;
				sum+=K[i];
			}
			else break;
		} 
		cout<<dem<<endl;
	}
}
 
