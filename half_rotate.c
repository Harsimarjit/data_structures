#include<stdio.h>
#include<stdlib.h>
void rotate(int a[],int n,int f,int l)
{
	int i,temp;
	int mid=n/2;
	while(f--){
		temp=a[mid-1];
		for(i=mid-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=temp;
	}
	while(l--){
		temp=a[mid];
		for(i=mid;i<n-1;i++){	
			a[i]=a[i+1];
		}
		a[n-1]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);	
	}
}
int main(int argc,const char*argv[])
{
	int n,i;
	n=argc-3;
	int a[n];
	for(i=1;i<argc-2;i++)
		a[i-1]=atoi(argv[i]);
	int f,l;
	f=atoi(argv[argc-2]);
	l=atoi(argv[argc-1]);	
	rotate(a,n,f,l);
	return 0;
}
