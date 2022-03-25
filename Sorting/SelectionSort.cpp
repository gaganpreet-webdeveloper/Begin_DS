//selection sort
# include<iostream>
using namespace std;
int selection_sort(int arr[], int n)
{
	for(int i = 0; i<n-1; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
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
	selection_sort(arr, n);
	print_arr(arr, n);
	return 0;
}

