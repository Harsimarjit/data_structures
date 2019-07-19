#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int ar[20],br[20];
	int i,j;
	int n=argc-1;
	j=n-1;
	for(i=1;i<argc;i++)
	{
		ar[i-1]=atoi(argv[i]);	
	}
	for(i=0;i<n;i++)
	{
		br[j]=ar[i];
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",br[i]);
	}
	return 0;
}
