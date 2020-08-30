#include<stdio.h>
 
int main(){
	int n,i,j,tg,k=1;
	long c,max;
	scanf("%ld%d",&c,&n);
	long a[n],s[n+1];
	for (i=1;i<=n;i++){
		scanf("%ld",&a[i]);	
	}
	int tongtt=0; 
	for(i=2;i<=n;i++){
		tongtt=a[i];
		for (j=1;j<i;j++){
			if (tongtt + a[j] <= c){
				tongtt+=a[j];
			}
		}
		s[k++]=tongtt;
	}
	max=s[1];
	for (i=1;i<k;i++) if (s[i]>max) max=s[i];
	printf("%ld",max);
	return 0;
}
 
