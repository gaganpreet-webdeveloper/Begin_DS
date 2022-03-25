// Spiral Matrix
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
	int row_start = 0;
	int row_end = n-1;
	int col_start = 0;
	int col_end = m-1;
	while(row_start<=row_end && col_start<=col_end)
	{
		//for row start
		for(int col = col_start; col<= col_end; col++)
		{
			cout<< a[row_start][col]<<" ";
		}
		row_start++;
		//for col end
		for(int row = row_start; row<= row_end; row++)
		{
			cout<< a[row][col_end]<<" ";
		}
		col_end--;
		//for row end
		for(int col = col_end; col>= col_start; col--)
		{
			cout<< a[row_end][col]<<" ";
		}
		row_end--;
		// for col start
		for(int row = row_end; row>=row_start; row--)
		{
			cout<<a[row][col_start]<<" ";
		
		}
		col_start++;
	}
	return 0;
}

