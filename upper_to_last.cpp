#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j=0;
	string str=argv[1];
	int n= str.length();
	char s[n];
	for(i=0;i<n;i++)
	{
		if(str[i]>=65 && str[i]<=90){
			s[j]=str[i];
			j++;
			str[i]=0;
		}
	}
	s[j]='\0';
	string strnew=str+s;
	cout<<strnew;
	return 0;
}
