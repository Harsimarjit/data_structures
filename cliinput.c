#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int i;
	for(i=1;i<argc;i++)
	{
		printf("%s ",argv[i]);
	}
	return 0;
}
