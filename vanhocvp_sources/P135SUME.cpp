#include<iostream>
 
using namespace std;
 
int main(){
	int a[8],vt1=1,vt2=1;
	for(int i=0;i<8;i++) cin>>a[i];
	for(int i=0;i<7;i++){
		
			if(a[i]>a[i+1]) vt1=0;
		
	}
	for(int i=0;i<7;i++){
	
			if(a[i]<a[i+1]) vt2=0;
		
	}
	if(vt1==0&&vt2==0) cout<<"mixed";
	else if(vt1==0) cout<<"descending";
	else cout<<"ascending";
	
}
 
