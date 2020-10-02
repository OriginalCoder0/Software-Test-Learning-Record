#include<stdio.h>
void sort(int a[],int m);
int main() {
	int i = 0;
	int a[] = {2,23,12,43,33,9,6};
	int m = sizeof(a)/sizeof(a[0]);
	sort(a,m);
	for(i = 0;i < m;i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
void sort(int a[],int m) {
	int i = 0,j = 0;
	for(i = 0;i<m-1;i++) {
		for(j = 0;j<j-m-1;j++) {
			if(a[j]>a[j+1]) {
				a[j] = a[j] + a[j+1];
				a[j+1] = a[j] - a[j+1];
				a[j] = a[j] - a[j+1];
			}
		}
	}
}
