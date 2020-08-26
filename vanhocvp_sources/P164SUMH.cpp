#include<iostream>
 
using namespace std;
int sum(int n){
	int sum=0;
	for(int i=1;i<=n;i++) sum+=i;
	return sum;
}
int main(){
	int n;
	cin>>n;
	int k=2;
	int SUM=1;
	while(1){
		if((SUM+sum(k))<=n){
			SUM+=sum(k);
			k++;
		}
		else break;
	}
	cout<<k-1;
}
 
