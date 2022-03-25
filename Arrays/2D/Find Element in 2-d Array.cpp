# include<iostream>
# define max 20
using namespace std;
void input(int M[max][max], int row, int column)
{
	cout<<"Enter the Elements of the matrix : ";
	for(int i = 0; i<row; i++)
	{
		for(int j = 0; j<column; j++)
		{
			cin>>M[i][j];
		}
	}
}
void Print_Array(int M[max][max], int row, int column)
{
	for(int i = 0; i<row; i++)
	{
		cout<<endl;
		for(int j = 0; j<column; j++)
		{
			cout<<M[i][j]<<" ";
		}
	}
}
void Find_elements(int M[max][max], int row, int column, int Find_element)
{
	int flag = 0;
	cout<<"--------------------Finding Element Status :- -----------------------";
	for(int i = 0; i<row; i++)
	{
		for(int j = 0; j<column; j++)
		{
			if(M[i][j]==Find_element)
			{
				flag = 1;
			}
		}
	}
	if(flag==1)
	{
		cout<<endl<<"Element Found i.e : "<<Find_element;
	}
	else{
		cout<<endl<<"Element not Found";
	}
}
int main()
{
	int row, column, Find_element;
	cout<<"------------------Find Element in the array -----------------------";
	cout<<endl;
	cout<<"Enter the row value for Matrix : ";
	cin>>row;
	cout<<endl;
	cout<<"Enter the column value for Matrix : ";
	cin>>column;
	cout<<endl;
	int M[max][max];
	input(M, row, column);
	Print_Array(M, row, column);
	cout<<endl<<"Enter the Element Which you  want to search : ";
	cin>>Find_element;
	Find_elements(M, row, column, Find_element);
return 0;
}

