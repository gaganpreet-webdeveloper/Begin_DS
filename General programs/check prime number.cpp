#include<iostream>
using namespace std;
int main()
{
	int number, i;
	cout<<"Enter a number : ";
	cin>>number;
	for(int i =2 ; i<number; i++ )
	{
		if(number%i==0)
		{
			cout<<"not a prime number"<<endl;
			break;
			
		}
		cout<<i<<endl;
	}
	if(number==i)
	{
		cout<<"Its prime number";
	}
}
