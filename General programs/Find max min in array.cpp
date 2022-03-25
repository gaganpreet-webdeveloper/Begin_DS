#include<iostream>
//#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	int maxno = INT_MIN;
	int minno = INT_MAX;
	//taking array elements inut from users
	for(int i =0; i<n;i++){
		cin>>arr[i];
	}
	//finding max min
	for(int i = 0 ; i<n; i++)
	{
//---------------this is one method of doing this------------------.
//		if(arr[i]>maxno){
//			maxno = arr[i];
//		}
//		if(arr[i]<minno)
//		{
//			minno = arr[i];
//		}

//-------------- there is another max and min built in functions.------------
		maxno = max(maxno, arr[i]);
		minno = min(minno, arr[i]);
	}
	cout<<"Max number : "<<maxno<<endl;
	cout<<"Min number : "<<minno<<endl;
}
