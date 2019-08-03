#include<iostream>
#define M 5
#define N 5
using namespace std;
void rotate(int row,int col,int arr[M][N],int m,int n)
{
	int i,j,prev,curr;
	if(row>m || col>n)	
		return;
	if(row+1==m || col+1==n)
		return;
	prev=arr[row+1][col];
	for(i=col;i<n;i++){
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
	for(i=row+1;i<m;i++){
		curr=arr[i][n-1];
		arr[i][n-1]=prev;
		prev=curr;
	}
	for(i=n-2;i>=col;i--){
		curr=arr[m-1][i];
		arr[m-1][i]=prev;
		prev=curr;
	}
	for(i=m-2;i>=row;i--){
		curr=arr[i][col];
		arr[i][col]=prev;
		prev=curr;
	}
	m--;
	n--;
	rotate(++row,++col,arr,m,n);
}
int main(void)
{
	int rot,i,j;
	//cout<<"Enter no. of rows and cols"<<endl;
	//cin>>m;
	//cin>>n;
	int arr[M][N];
	int m,n;
	m=M;
	n=N;
	cout<<"Enter array"<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Enter rotations"<<endl;
	cin>>rot;
	for(i=0;i<rot;i++)
	{
		rotate(0,0,arr,m,n);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
