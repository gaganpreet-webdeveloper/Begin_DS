// find the first repeating element in an array with small index.
# include<iostream>
using namespace std;
void find_repeat_element(int arr[], int size)
{
	int flag = 0;
	for(int i = 0; i<size; i++)
	{
		if(flag == 1){
			break;
		}
		for(int j = i+1; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				cout<<"element found at index : "<< i<< "and element is : "<< arr[j]<<endl;
				flag = 1;
				break;
			}
		}
	}
}
int main()
{
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter the array elements : ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	find_repeat_element(arr, size);
	return 0;
}

