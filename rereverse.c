#include<stdio.h>
#include<stdlib.h>
int reverse(int n,int a[])
{
	int temp=a[n-1];
	printf("%d ",temp);
	temp=n-1;
	if(temp<=0){
		return 0;
	}
	int x=reverse(temp,a);
}
int main(int argc,const char* argv[])
{
	int n=argc-1;
	int a[n];
	int i;
	for(i=1;i<argc;i++)
	{
		a[i-1]=atoi(argv[i]);
	}
	int d=reverse(n,a);
	return 0;
}
