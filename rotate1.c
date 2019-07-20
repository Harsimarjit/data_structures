#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
        int i,t,temp;
        int a[20];
        int n=argc-1;
        for(i=1;i<=n;i++)
        {
                a[i-1]=atoi(argv[i]);
        }
        printf("Enter no. of times to rotate = \n");
        scanf("%d",&t);
        while(t--)
        {
                temp=a[n-1];
                for(i=n-1;i>=0;i--)
                {
                        a[i]=a[i-1];
                }
                a[0]=temp;
        }
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        return 0;
}
