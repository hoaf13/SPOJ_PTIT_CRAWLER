#include<iostream>
#include<iomanip>
using namespace std;
 
int main(){
	int t=1;
	while(1){
		int n;
		cin>>n;
		if(n<0) return 0;
		int a[n],b[n],c[n];
		for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
		float x,y;
		int Sum1=0,Sum2=0,Sum3=0;
		for(int i=0;i<n;i++){
			Sum1+=c[i];
			Sum2=Sum2+c[i]*b[i];
			Sum3=Sum3+c[i]*a[i];
			
		}
		x=float(Sum2)/Sum1;
		y=float(Sum3)/Sum1;
		cout<<"Case "<<t++<<": ";
		cout<<fixed<<setprecision(2)<<y<<' '<<setprecision(2)<<x<<endl<<endl;
	}
}
 
