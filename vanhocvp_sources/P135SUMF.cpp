#include<iostream>

using namespace std;
 
int main(){
	int n;
	long sum=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=i;j<=n;j++) sum=sum+i+j;
	}
	cout<<sum;
}
 
