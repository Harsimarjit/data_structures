#include<stdio.h>
int main()
{
int a[30],i,n,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("Number found at %d",i);
}
}
return 0;
}
