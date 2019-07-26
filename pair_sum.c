#include<stdio.h>
#include<stdlib.h>
void equalsum(int a[],int n,int num)
{
	int i,j,x,y,sum=0,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{	
			sum=a[i]+a[j];
			if(sum==num)
			{
				x=a[i];
				y=a[j];
				flag=1;
                		printf("Sum of %d and %d = %d\n",x,y,num);			
			}
		}
	}
	if(flag==0)
		printf("Sum not found");
}
int main(int argc,const char* argv[])
{
	int i,n;
	n=argc-2;
	int a[n];
	for(i=1;i<argc-1;i++)
		a[i-1]=atoi(argv[i]);
	int num=atoi(argv[argc-1]);
	equalsum(a,n,num);
	return 0;
}
