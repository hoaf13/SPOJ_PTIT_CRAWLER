#include<iostream>
 
using namespace std;
long long a[105][11];
long long Sum(long long a[105][11],int x,int y,int z){
	long long  Sum=0;
	for(int i=0;i<11;i++){
	//	for(int j=0;j<3;j++){
			Sum=Sum+max(max(a[x][i],a[y][i]),a[z][i]);
	//	}
	}
	return Sum;
}
int main(){
	int n;
	cin>>n;
	long long x=0,Max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<11;j++) cin>>a[i][j];
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int t=j+1;t<n;t++){
//				long long tmp=0;
//				tmp=maxk(a,i)+maxk(a,j)+maxk(a,t);
//				cout<<maxk(a,i)<<" "<<maxk(a,j)<<" "<<maxk(a,t)<<endl;
				if(Max<Sum(a,i,j,t)) Max=Sum(a,i,j,t);
			}
		}
	}
	
	cout<<Max;
	
}
 
