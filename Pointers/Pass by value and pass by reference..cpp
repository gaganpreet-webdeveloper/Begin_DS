// Pass by value.

//# include<iostream>
//using namespace std;
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = a;
//}
//int main()
//{
//int a = 5;
//int b = 10;
//swap(a, b);
//cout<<"a : "<<a<<" "<<"b : "<<b;
//return 0;
//}



//pass by reference.

# include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
int a = 5;
int b = 10;
int *aptr;
aptr = &a;
int *bptr;
bptr = &b;
swap(aptr, bptr);
cout<<"a : "<<a<<" "<<"b : "<<b;
return 0;
}
