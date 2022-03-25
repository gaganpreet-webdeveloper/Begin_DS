//pythagorian triplet
#include<iostream>
#include<math.h>
using namespace std;
int max(int a, int b, int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else{
		return c;
	}
}
int main()
{
	int first, second, third;
	cin>>first;
	cin>> second;
	cin>>third;
	int max_value = max(first, second, third);
	if(max_value!=second && max_value!= third){
		if(pow(max_value, 2) == (pow(second, 2) + pow(third, 2)))
		{
			cout<<"it is pythagran"<<pow(max_value, 2)<<" = "<< (pow(second, 2) + pow(third, 2));
			cout<<"first";
		}
		else{
			cout<<"not";
		} 
	}
	else if(max_value!=first && max_value!= third)
	{
		if(pow(max_value, 2) == (pow(first, 2) + pow(third, 2)))
		{
			cout<<"it is pythagran"<<pow(max_value, 2)<<" = "<< (pow(first, 2) + pow(third, 2));
			cout<<"second";
		}
		else{
			cout<<"not";
		} 
	}
	else if(max_value!=first && max_value!= second){
		if(pow(max_value, 2) == (pow(first, 2) + pow(second, 2)))
		{
			cout<<"it is pythagran"<<pow(max_value, 2)<<" = "<< (pow(first, 2) + pow(second, 2));
			cout<<"third";
		}
		else{
			cout<<"not";
		}
	}
}
