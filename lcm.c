#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
        int i,n,j,res=1,nextit=0;
        n=argc-1;
        int a[n];
        for(i=1;i<argc;i++){
                a[i-1]=atoi(argv[i]);
        }
        int max=-1;
        for(i=0;i<n;i++){
                if(a[i]>=max)
                        max=a[i];
        }
	int check;
        for(i=2;i<=max;i++)  
        {
		while(nextit==0)
		{
			nextit=1;
                	for(j=0;j<n;j++)
                	{
                       		if(a[j]%i==0)
                       		{       
                            		a[j]=a[j]/i;
					check=0;
                    		}
				if(a[j]%i==0)
					nextit=0;
                	}
			if(check==0){
			res=res*i;
			check=1;
			}
		}
		nextit=0;
        }
	printf("%d",res);
        return 0; 
}
