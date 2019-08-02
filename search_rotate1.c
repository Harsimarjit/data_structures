#include<stdio.h>
#include<stdlib.h>
void reverse(int a[],int n,int num)
{
        int i,rot=0;
        for(i=0;i<n-1;i++)
        {
                if(a[i]>a[i+1]){
                        rot=i+1;
                        break;
                }
        }
	int vari=rot;
        while(rot--){
                int temp=a[0];
                for(i=0;i<n-1;i++){
                        a[i]=a[i+1];
                }
                a[n-1]=temp;
        }
        search_num(a,n,num,vari);
}
void search_num(int a[],int n,int num,int vari){
	int i;
	int start,mid,end;
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(start<=end){
		if(num<a[mid]){
			end=mid-1;
		}
		else if(num==a[mid]){
			printf("No. %d found at %d",num,(vari+mid)); 
			break;
		}
		else{
			start=mid+1;
		}		
		mid=(start+end)/2;
	}
	if(start>end)
		printf("No. %d not found",num);
}
int main(int argc,const char* argv[])
{
	int i,n;
	n=argc-2;
	int a[n];
	for(i=1;i<argc-1;i++){
		a[i-1]=atoi(argv[i]);	}
	int num=atoi(argv[argc-1]);	
	reverse(a,n,num);
	return 0;
}
