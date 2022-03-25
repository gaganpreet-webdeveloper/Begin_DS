#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int rem, sum = 0, num, rem_result, ans = 0;
	cout<<"Enter a number : "<<" ";
	cin>>num;
	int origional_number = num;
	while(num!=0)
	{
		rem = num%10;
		rem_result = pow(rem, 3);
		ans = ans + rem_result ;
		num = num/10;
	}
	if(ans == origional_number){
		cout<<"Entered number is the armstrong number i.e : "<<origional_number;
	}
	else{
		cout<<"Entered number is not a armstrong number i.e : "<<origional_number;
	}

	
}
