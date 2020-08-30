#include<stdio.h>
//void quicksort(int a[],int l, int r){
//	int i=l,j=r;
//	int mid=(i+j)/2;
//	int key=a[mid];
//	while(i<=j){
//		while(a[i]<key) i++;
//		while(a[j]>key) j--;
//		if (i<=j){
//			int tg=a[i];
//			a[i]=a[j];
//			a[j]=tg;
//			i++;
//			j--;
//		}
//	}
//	if (l<j) quicksort(a,l,j);
//	if (i<r) quicksort(a,i,r);
//}
 
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	int dem=0;
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (a[i]>a[j]){
				dem++;
			}
		}
	}
	printf("%d",dem);
return 0;
}
 
