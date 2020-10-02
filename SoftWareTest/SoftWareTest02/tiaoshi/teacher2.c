#include<stdio.h>
struct jioushu {
	int jishu;
	int oushu;
};
void sort(int a[],int m);
jioushu numcount(int a[],int m);
int main() {
	jioushu num;
	num.jishu= 0;
	num.oushu = 0;
	int i = 0;
	int a[] = {2,23,12,43,33,9,6};
	int m = sizeof(a)/sizeof(a[0]);
	sort(a,m);
	for(i = 0;i < m;i++) {
		printf("%d ",a[i]);
	}
//	值传递 
	num = numcount(a,m);
	printf("jishu=%d",num.jishu);
	printf("oushu=%d",num.oushu);
//	引用传递 
	int jishu = 0,oushu = 0;
	numcount(a,m,jishu,oushu);
	printf("jishu=%d",jishu);
	printf("oushu=%d",oushu);
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
jioushu numcount(int a[],int m) {
	jioushu num;
	num.jishu= 0;
	num.oushu = 0;
	int i = 0;
	for (i = 0;i<m-1 ;i++)
		if(a[i]%2==0) {
			num.oushu++;
		}
		else num.jishu++;
	return num;
}

void numcount(int a[],int m,int &jishu,int &oushu) {
	for (i = 0;i<m-1 ;i++)
		if(a[i]%2==0) {
			oushu++;
		}
		else jishu++;
}
