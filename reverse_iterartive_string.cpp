#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,n,j;
	string str=argv[1];
	char ch;
	n=str.length();
	j=n-1;
	for(i=0;i<n/2;i++)
	{
		ch=str[i];
		str[i]=str[j];
		str[j]=ch;
		j--;
	}
	cout<<str;
	return 0;
}
