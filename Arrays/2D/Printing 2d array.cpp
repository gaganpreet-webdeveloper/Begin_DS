// 2 dimension array

# include<iostream>
using namespace std;
int main()
{
	int n, m;
	cout<<"Enter the number of rows : ";
	cin>>n;
	cout<<"Enter the number of columns : ";
	cin>>m;
	int a[n][m];
	// taking array elements input from user
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
//	printing 2d array
	for(int i = 0; i<n; i++)
	{
		cout<<endl;
		for(int j = 0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
	}
return 0;
}

