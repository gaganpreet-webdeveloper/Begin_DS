//Implementing two stacks in one array.

#include<iostream>
using namespace std;
class Stack{
	public:
	//properties
	int *arr;
	int top1;
	int top2;
	int size;
	//behavior
	Stack(int Size)   //constructor
	{
		this->size = Size;
		arr = new int[size];
		top1 = -1;
		top2 = size;
	}
	void push_stack1(int element)
	{
		if(top2-top1>1)
		{
			top1++;
			arr[top1] = element;
			cout<<"Element is succesfully Inserted"<<endl;
		}
		else{
			cout<<"Array is overflow"<<endl;
		}
	}
	void push_stack2(int element)
	{
		if(top2-top1>1)
		{
			top2--;
			arr[top2] = element;
			cout<<"Element is succesfully Inserted"<<endl;
		}
		else{
			cout<<"Array is overflow"<<endl;
		}
	}
	void pop1()
	{
		if(top1>=0)
		{
			top1--;
			cout<<"Element is poped"<<endl;
		}
		else{
			cout<<"stack is underflow";
		}
	}
	void pop2()
	{
		if(top2<size)
		{
			top1++;
			cout<<"Element is poped"<<endl;
		}
		else{
			cout<<"stack is underflow";
		}
	}
	void peek1()
	{
		if(top1>=0)
		{
			cout<<"Peek element is : "<<arr[top1]<<endl;
		}
		else{
			cout<<"Array is empty";
		}
	}
	void peek2()
	{
		if(top2<size)
		{
			cout<<"stack2 peek element is : "<<arr[top2]<<endl;
		}
		else{
			cout<<"Stack is empty";
		}
	}
};
int main()
{
	Stack obj(5);
	obj.push_stack1(100);
	obj.push_stack1(200);
	obj.push_stack1(500);
	cout<<endl;
	obj.peek1();
	obj.push_stack2(900);
	obj.push_stack2(1900);
	obj.peek2();
	
	cout<<"--------------------------";
	for(int i =0; i<obj.size; i++){
		cout<<obj.arr[i]<<endl;
	}
	
	
	cout<<"-------------------";
	obj.pop1();
	obj.peek1();
	obj.peek2();
};
