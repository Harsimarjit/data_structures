#include<stdio.h>
#include<stdlib.h>
int pivot_binary_search(int a[],int n,int num)
{
	int i,low,high;
	int p=find_pivot(a,n);
	low=0;
	high=p;
	int loc=binary_search(a,low,high,num);
	if(loc==-1){
		low=p+1;
		high=n-1;
		loc=binary_search(a,low,high,num);
	}
	return loc;
}
int binary_search(int a[],int low,int high,int num)
{
	if(low>high)
		return -1;
	int mid=low + (high-low)/2;
	if(a[mid]==num)
		return mid;
	if(num>a[mid])
		return binary_search(a,mid+1,high,num);
	return binary_search(a,low,mid-1,num);
}
int find_pivot(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			return i;
		}
	}
}
int main(int argc,const char* argv[])
{
	int i,n;
	n=argc-2;
	int a[n];
	for(i=1;i<argc-1;i++)
		a[i-1] = atoi(argv[i]);
	int num=atoi(argv[argc-1]);
	int res=pivot_binary_search(a,n,num);
	if(res==-1)
		printf("Number not found");
	else
		printf("No. found at %d",res);
	return 0;
}
