#include<iostream>
 
using namespace std;
int chuyendoi(int a){
	int b=0;
	b=(a%10)*100;
	a/=10;
	b=b+(a%10)*10;
	a/=10;
	b+=a;
	return b;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(chuyendoi(a)>chuyendoi(b)) cout<<chuyendoi(a);
	else cout<<chuyendoi(b);
}
 
