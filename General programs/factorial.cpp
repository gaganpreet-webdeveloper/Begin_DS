#include<iostream>
using namespace std;
int fact(int num){
	int f = 1;
	for(int i = 1; i<=num; i++){
		f = f * i;
	}
	return f;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	int ans = fact(n);
	cout<<"Factorial of the given number is : "<<ans;
}
