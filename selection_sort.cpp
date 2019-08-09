#include<iostream>
#include<stdlib.h>
using namespace std;
void select_sort(int a[],int n)
{
	int i,min,loc,j,flag=0;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		min=a[i];
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{	
				min=a[j];
				loc=j;
				flag=1;
			}
		}	
		if(flag==1){
			min=a[i];
			a[i]=a[loc];
			a[loc]=min;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" "; 
}
int main(int argc,const char* argv[])
{
	int i,n;
	n=argc-1;
	int a[n];
	for(i=1;i<argc;i++){
		a[i-1]=atoi(argv[i]);
	}
	select_sort(a,n);
	return 0;
}
