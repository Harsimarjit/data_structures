#include<stdio.h>
#include<stdlib.h>
void reverse(int a[],int n)
{
	int i,rot=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1]){
			rot=i+1;
			break;
		}
	}
	printf("Number of right rotations = %d\n",rot);
	while(rot--){
		int temp=a[0];
		for(i=0;i<n-1;i++){
			a[i]=a[i+1];
		}
		a[n-1]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int main(int argc,const char* argv[])
{
	int n,i;
	n=argc-1;
	int a[n];
	for(i=1;i<argc;i++)
	{
		a[i-1]=atoi(argv[i]);	
	}
	reverse(a,n);
	return 0;
}
