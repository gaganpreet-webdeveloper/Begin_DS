// using stl

//#include<iostream>
//#include<stack>
//using namespace std;
//int main(){
//	stack<int>s;
//	s.push(7);
//	s.push(71);
//	s.push(710);
//	s.push(17);
//	s.pop();
//	cout<<"Element is : "<<s.top()<<endl;
//	cout<<"Stack size is : "<<s.size()<<endl;
//	if(s.empty())
//	{
//		cout<<"stack is empty"<<endl;
//	}
//	else{
//		cout<<"stack is not empty";
//	}
//}


// without stl

#include<iostream>
using namespace std;
class stack{
	//properties
	public:
	int *arr;
	int top;
	int size;
	
	//behaviour
	public:
	stack(int Size)
	{
		this->size = Size;
		arr = new int[size];
		top = -1;
	}
	void push(int num)
	{
		if(size-top>1)
		{
			top++;
			arr[top] = num;
			cout<<"push done"<<arr[top]<<endl;
			
			
		}
		else{
			cout<<"stack is overflow"<<endl;
		}
	}
	void pop()
	{
		if(top>=0)
		{
			top--;
			
		}
		else{
			cout<<"Stack is underflow";
		}
	}
	void peek()
	{
		if(top>=0)
		{
			cout<<"stack is "<<arr[top]<<endl;
//			return arr[top];
		}
		else{
			cout<<"stack is empty"<<endl;
		
		}
	}
	void display_stack(){
		for(int i = 0; i<size; i++){
			cout<<arr[i]<<endl;
		}
	}
	
};


int main()
{
	stack obj(5);
	obj.push(100);
	obj.push(200);
	obj.push(300);
	obj.push(400);
	obj.push(500);
//	obj.push(700);
obj.display_stack();
	obj.pop();
	obj.peek();
	obj.pop();
	obj.peek();

//	cout<<obj.peek()<<endl;

}
