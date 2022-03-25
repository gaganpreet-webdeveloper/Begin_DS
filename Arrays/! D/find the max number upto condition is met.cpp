#include <iostream>
#include<climits>
using namespace std;
int max_till(int arr[], int size, int indi)
{
    int maxno = INT_MIN;
    for(int i = 0; i<size; i++){
    	if(i==indi){
    		maxno = max(arr[indi], maxno);
    		break;
		}
        maxno = max(arr[i], maxno);
    }
    return maxno;
}

int main()
{
    int size, arr[size], indi;
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the Array elements : ";
    for(int i = 0 ; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the index at upto which you want to find the maximum";
    cin>>indi;
    cout<<max_till(arr, size, indi);
}

