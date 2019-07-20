#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int i,n,j,flag;
	n=argc-1;
	int a[n];
	for(i=1;i<argc;i++){
		a[i-1]=atoi(argv[i]);
	}
	int min=2000;
	for(i=0;i<n;i++){
		if(a[i]<=min)
			min=a[i];
	}
	for(i=min;i>=1;i--)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(a[j]%i!=0)
			{	
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("GCD = %d",i);
			break;
		}
	}
	return 0;
}
