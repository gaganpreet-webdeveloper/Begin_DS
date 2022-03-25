//reverse a number
#include<iostream>
using namespace std;
int main()
{
	int i, num, reverse = 0;
	cout<<"Enter a number";
	cin>>num;
	while(num!=0)
	{
		int reminder = num%10;
		reverse = reverse*10 + reminder;
		num = num/10;
	}
	cout<<reverse;
}
