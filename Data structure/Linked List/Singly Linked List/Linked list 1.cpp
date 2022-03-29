// Linked list Starts
# include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	//constructor
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void insert_at_begin(node* &head, int data)
{
	//node create
	node* temp_node = new node(data);
	temp_node->next = head;
	head = temp_node;
}
void print(node* &head)
{
	node* temp = head;
	while(head != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
	
}
int main()
{
	node* node1 = new node(5);
	cout<<"Node 1 has data : "<<node1->data<<endl;
	
	// creates a head pointer
	node * head = node1;
	insert_at_begin(head, 100);
	insert_at_begin(head, 200);
	insert_at_begin(head, 300);
	print(head);
return 0;
}

