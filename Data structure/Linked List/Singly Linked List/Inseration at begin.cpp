//Inseration at begin
# include<iostream>
using namespace std;
class node{
	public:
	//members
	int data;
	node* next;
	//constructor
	node(int data){
		this->data = data;
		this->next = NULL;
	}
};
void insert_at_begin(node* &head, int data)
{
	//creates a node 
	node* temp = new node(data);
	temp->next = head;
	head = temp;
}
void print(node* &head)
{
	node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	node* node1 = new node(50);
	cout<<"node1 ha a value : "<<node1->data<<endl;
	node* head = node1;
	insert_at_begin(head, 100);
	insert_at_begin(head, 200);
	print(head);
	
return 0;
}

