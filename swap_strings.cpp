#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	string str1=argv[1];
	string str2=argv[2];
	string str3="";
	str3=str1;
	str1=str2;
	str2=str3;
	cout<<str1<<endl<<str2;
	return 0;
}
