//Largest word in a string
# include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the sentence : ";
	cin>>n;
	cin.ignore();
	char arr[n+1];
	cout<<"Enter a string : ";
	cin.getline(arr, n+1);
	cin.ignore();
	cout<<arr;

	return 0;
}

