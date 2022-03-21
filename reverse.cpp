#include<iostream>
using namespace std;
void reverse_arr(int arr[], int size)
{
	for(int i = size-1; i>=0; i--)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int size;
	cout<<"Enter the size of the array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array : ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	reverse_arr(arr, size);
	
}
