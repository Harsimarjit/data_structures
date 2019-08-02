#include<stdio.h>
#include<string.h>
int main(void )
{
	char str1[15]="hello world";
	char str2[] = "hello world";
	char str3[]={'h','e','l','l','o','\0'};
	printf("%s %s %s",str1,str2,str3);
	return 0;
}
