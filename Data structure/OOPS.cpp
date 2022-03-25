#include<iostream>
using namespace std;
//class car
//{
//	//properties(data members)
//	public:
//	char color;
//	int modelno;
//	car(int modelno)
//	{
//		this->modelno = modelno;
//		cout<<"modelno is : "<<this;
//	}
//	
//};
//
//int main()
//{
//	car obj(2008);
////	obj.color = 'A';
////	obj.modelno = 2008;
////	cout<<"The color of car is : "<< obj.color<<endl;
////	cout<<"The color of car is : "<< obj.modelno<<endl;
//cout<<"modelno is : "<< &obj;
//cout<<"size of empty clas is "<< sizeof(obj);
//};


// 4 pillars of oops concept -> 1). Encapsulation  2). Inheritance  3). Polymorphism  4). Abstraction

// 1). Inheritance

class monkey{
//	public:
protected:
	string name;
	int age; 
	char bloodgroup;
	public:
	string geter(){                       //geter || seter => used for accessing private data members.
		return name;
	}
	void seter(string Name)
	{
		this->name = Name;
	}
};
class human : public monkey{
	public:
	string topa;
};
int main(){
	human obj;
	obj.seter("gagan");
	cout<<obj.geter()<<endl;

}
