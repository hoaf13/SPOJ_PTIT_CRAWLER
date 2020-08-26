#include<iostream>
 
using namespace std;
 
int main(){
		int c,v0,v1,a,l;
	int ngay=1;
	cin>>c>>v0>>v1>>a>>l;
	c=c-v0;
	while(1){
		if (c<=0){
			cout<<ngay;
			return 0;
		}else{
			ngay++;
			v0+=a;
			if (v0>v1){
				v0=v1;
			}
			c=c+l-v0;
		}
	}
 
return 0;
} 
