#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,flag;
	string str1=argv[1];
	string str2=argv[2];
	char temp;
	int n=str2.length();
	for(j=1;j<=n;j++){
		temp=str2[n-1];
		for(i=n-1;i>=1;i--){
			str2[i]=str2[i-1];	
		}
		str2[0]=temp;
		if(str1==str2)
		{
			cout<<"Yes,these string are rotation of each other";
			break;
		}
	}	
	if(j>n)
		cout<<"No,these are not rotation of each  other";
	return 0;
}
