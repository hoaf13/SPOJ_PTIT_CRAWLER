#include<iostream>
 
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int tmp=a[k-1];
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]>=tmp&&a[i]>0) dem++;
	}
	cout<<dem;
}
 
