#include<stdio.h>
void sort(int a[], int m)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for (i = 0; i<m - 1; i++)
    {
        for (j = 0; j < m - i - 1; j++)
        {
            if (a[j]>a[j + 1])
            {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i=0; i < m; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}
void odd(int a[],int m) {
	int n = 0,k = 0; 
	int i = 0;
	int j = 0 ;
	for(i = 0;i < m;i++) {
		if(a[i] % 2 == 0) {
			n++;
		}
		else k++;
	}
	printf("偶数个数为：%d\n",n);
	printf("奇数个数为：%d",k);
}
int main()
{
    int i = 0;
    int n = 0;	
    int a[10] = {11,12,45,3,6,9,8,17,34,23};
    int m = sizeof(a) / sizeof(a[0]);
    sort(a, m);
    odd(a,m);
    return 0;
}
