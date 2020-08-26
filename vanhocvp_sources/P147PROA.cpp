#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
		int A,B,C;
		float l,r,h;
		cin>>A>>B>>C;
		//l*r=A;l*h=B;h*r=C;
		l=sqrt(A*B/C);
		r=A/l;h=C/r;
		cout<<(l+r+h)*4;
	
}
 
