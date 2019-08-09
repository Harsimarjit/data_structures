#include<iostream>
#include<stdlib.h>
using namespace std;
void insert_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main(int argc,const char* argv[])
{
	int i,n;
	n=argc-1;
	int a[n];
	for(i=1;i<argc;i++)
		a[i-1]=atoi(argv[i]);
	insert_sort(a,n);
	return 0;
}
