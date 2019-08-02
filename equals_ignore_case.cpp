#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	int i;
	string str1=argv[1];
	string str2=argv[2];
	int m=str1.length();
	int n=str2.length();
	if(m==n){
		for(i=0;i<m;i++)
		{
			if(str1[i]>=65 && str1[i]<=90)
				str1[i]=str1[i]+32;
			if(str2[i]>=65 && str2[i]<=90)
				str2[i]=str2[i]+32;
		}
       		if(str1==str2)
                	cout<<"The strings are Equal.";
        	else
                	cout<<"The strings are Not Equal.";
	}
	else
		cout<<"The strings are Not Equal.";
	return 0;
}
