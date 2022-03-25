#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num, rem, binary_to_decimal = 0, i=0;
	cout<<"Enter a number : ";
	cin>>num;
	while(num!=0){
		rem = num%10;
		binary_to_decimal += (pow(2, i)*rem);
		cout<<rem<<endl;
		num = num/10;
		i++;
	}
	cout<<binary_to_decimal;
	return 0;
}
