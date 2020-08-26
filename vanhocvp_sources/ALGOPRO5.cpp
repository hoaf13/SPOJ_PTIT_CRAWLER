#include<iostream>
 
using namespace std;
long long TH(int n){
		
}
int main(){
	int n;
	cin>>n;
	long long sum=0;
	long long tmp=1;
	for(int i=1;i<=n;i++){
		tmp=tmp*2;
		sum=sum+tmp;
	}
	cout<<sum;
}
 
