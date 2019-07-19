#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int n=argc-1;
	int i,a[n];
	for(i=1;i<argc;i++)
		a[i-1]=atoi(argv[i]);
	int s;
	scanf("%d",&s);
	int start,end,mid;
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(start<=end)
	{
		if(a[mid]<s)
			start=mid+1;
		else if(a[mid]==s){
			printf("No. at %d",mid);
			break;
		}
		else
			end=mid-1;
		mid=(start+end)/2;
	}
	if(start>end)
		printf("Not Found");
	return 0;
}
