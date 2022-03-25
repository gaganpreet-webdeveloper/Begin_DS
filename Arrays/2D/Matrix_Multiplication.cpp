//Matrix Multiplication
# include<iostream>
#define max 20
using namespace std;
void input(int M1[max][max], int M2[max][max], int Ans[max][max] , int r1, int r2, int c1, int c2)
{
	if(r2==c1)
	{
		int i, j;
		cout<<"---------Enter elements for Matrix M1---------";
		cout<<endl;
		for(i = 0; i<r1; i++)
		{
			for(j = 0; j<c1; j++)
			{
				cin>>M1[i][j];
			}
		}
		
		cout<<"---------Enter elements for Matrix M2---------";
		cout<<endl;
		for(int i = 0; i<r2; i++)
		{
			for(int j = 0; j<c2; j++)
			{
				cin>>M2[i][j];
			}
		}
		// Initiallizing Answer Matrix with Zeros
		for(int i = 0; i<r1; i++)
		{
			for(int k = 0; k<c2; k++)
			{
				Ans[i][k] = 0;
			}
		}
	}
}

void matrix_multiplication(int M1[max][max], int M2[max][max], int Ans[max][max], int r1, int r2, int c1, int c2)
{
	for(int i = 0; i<r1; i++)
	{
		for(int j = 0; j<r2; j++)
		{
			for(int k = 0; k<c1; k++)
			{
				Ans[i][j] += M1[i][k] * M2[k][j];
			}
		}
	}
}
//printing the final matrix
void print_matrix(int Ans[max][max], int r1, int c2)
{
	for(int i = 0; i< r1; i++)
	{
		cout<<endl;
		for(int j = 0; j<c2; j++)
		{
			cout<<Ans[i][j]<<" ";
		}
	}
}
int main()
{
	int r1, r2, c1, c2;
	cout<<"----------For Matrix 1----------";
	cout<<endl;
	cout<<"Enter the number of Rows : ";
	cin>>r1;
	cout<<"Enter the Number of columns : ";
	cout<<endl;
	cin>>c1;
	cout<<"----------For Matrix 2----------";
	cout<<endl;
	cout<<"Enter the number of Rows : ";
	cin>>r2;
	cout<<"Enter the Number of columns : ";
	cout<<endl;
	cin>>c2;
	int M1[max][max];
	int M2[max][max];
	int Ans[max][max];
	input(M1, M2, Ans, r1, r2, c1, c2);
	cout<<endl<<"----------Before Multiplication Matrix1 is: ";
	print_matrix(M1, r1, c2);
	cout<<endl<<"----------Before Multiplication Matrix2 is: ";
	print_matrix(M2, r1, c2);
	matrix_multiplication(M1, M2, Ans, r1, r2, c1, c2);
	cout<<endl<<"------------------After Multiplication Matrix is : --------------";
	print_matrix(Ans, r1, c2);
	
return 0;
}

