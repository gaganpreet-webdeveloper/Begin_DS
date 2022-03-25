//check string is pallindrome or not
# include<iostream>
using namespace std;
int main()
{
	int size, flag = 0;
	cout<<"Enter the size : ";
	cin>>size;
	char arr[size+1];
	cout<<"Enter the string : ";
	cin>>arr;
	for(int i = 0; i<size; i++)
	{
		if(arr[i]!=arr[size-1-i])
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"string is not pallindrome";
	}
	else{
		cout<<"String is pallindrome";
	}
return 0;
}

