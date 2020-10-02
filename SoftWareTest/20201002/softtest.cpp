#include<iostream>
using namespace std;
void sortArray(int a[],int n);
void subsumArray(int a[],int n,int (&sum)[5]);
int main () {
	int a[5],i;
	int sum[5];
	int m = sizeof(a)/sizeof(a[0]);
	for(i=0;i<m;i++) {
		cin>>a[i];
	}
	subsumArray(a,m,sum);
	for(i=0;i<m;i++) {
		cout<<sum[i]<<" "<<endl;
	}
//	sortArray(sum,m);
//	for(i=0;i<m;i++) {
//		cout<<sum[i]<<" "<<endl;
//	}
	sortArray(a,m);
	for(i=0;i<m;i++) {
		cout<<a[i]<<" ";
	}
	return 0; 
}
//ÅÅÐò 
void sortArray(int a[],int n) {
	int t = 0;
	for(int i = 0;i<n-1;i++) {
		for(int j = 0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
void subsumArray(int a[],int n,int (&sum)[5]) {
	int x = 0,y = 0,z = 0;
	for(int i =0;i<n;i++) {
		x = a[i]/100;
		y = a[i] % 100 /10;
		z = a[i] % 100 %10;
		sum[i] = x+y+z;
	}
}
