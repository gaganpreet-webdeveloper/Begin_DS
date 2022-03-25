#include<iostream>
using namespace std;
int fib(int n){
	int t1 = 0;
	int t2 = 1;
	int next_term;
	for(int i = 0; i<n; i++){
		cout<<t1<<endl;
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;
	}
}
int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	fib(num);
}
