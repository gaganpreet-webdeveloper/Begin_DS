//bubble sort
# include<iostream>
using namespace std;
int Bubble_sort(int arr[], int n)
{
	for(int i = 0; i<n-1; i++)
	{
		for(int j = 0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void print_arr(int arr[], int n)
{
	cout<<"Array elements are : ";
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	//taking array elements from the users.
	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}
	Bubble_sort(arr, n);
	print_arr(arr, n);

	return 0;
}

