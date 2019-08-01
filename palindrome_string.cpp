#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j=0;
	string str=argv[1];
	int n=str.length();
	char strrev[n];
	for(i=n-1;i>=0;i--)
	{
		strrev[j]=str[i];
		j++;
	}
	strrev[j]='\0';
	if(str==strrev)
		cout<<"String is Palindrome";
 	else
  		cout<<"Not Palindrome";
	return 0;
}
