//Binary search------------->Time  complexity = O(log de power 'n' and base 2)
// notice ------------------> Array should be sorted for binary search.
# include<iostream>
using namespace std;
int Binary_search(int arr[], int n, int element)
{
	int front = 0;
	int last = n;
	
	while(front<=last){
		int mid = (front + last)/2;
		if(arr[mid]==element){
			return mid;
		}
		else if(arr[mid]< element){
			front = mid + 1;
		}
		else if(arr[mid]> element)
		{
			last = mid - 1;
		}
	}
	return -1;
	
}

int main()
{
	int n, element;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	//taking array elements from the users.
	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Enter the Element which you want to find : ";
	cin>>element;
	cout<<Binary_search(arr, n, element);
	return 0;
}

