#include<iostream>
#include<string>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j;
	string str=argv[1];
	int n=str.length();
	for(i=0;i<n;i++)
	{
		if(str[i]!=0){
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					str[j]=0;
				}
			}
		}
	}
	cout<<str;
	return 0;
}
