#include<stdio.h>
#include<stdlib.h>
void rever(int a[],int n,int r){
	int i,j=0;
	int siz=r%n;
	int temp[siz];
	for(i=n-siz;i<n;i++){
		temp[j]=a[i];
		j++;
	}
	for(i=n-siz-1;i>=0;i--)
	{
		a[i+siz]=a[i];
	}
	for(i=0;i<siz;i++)
	{
		a[i]=temp[i];
	}        
}
int main(int argc , const char* argv[])
{
	int i,n;
	int a[20];
	n=argc-2;
	for(i=1;i<argc-1;i++)
	{
		a[i-1]=atoi(argv[i]);
	}
	int r = atoi(argv[argc-1]);
	rever(a,n,r);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
