//linear search ----------------> complexity = O(n)
#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int element){
	for(int i = 0; i<n; i++)
	{
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
}
int main(){
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
	cout<<linear_search(arr, n, element);

}
