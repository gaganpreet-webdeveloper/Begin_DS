// Insert at middle
# include<iostream>
using namespace std;
class node{
	public:
		//memebers
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
	node* temp= new node(data);
	temp->next = head;
	head = temp;
}
void insert_at_end(node* &tail, int data) //tail is pointing to last node of the linked list
{
	node* temp = new node(data);
	tail->next = temp;
	tail = temp;
}
void insert_at_middle(node* &tail, node* &head, int position, int data){
	//if insert at start condition
	if(position == 1)
	{
		insert_at_begin(head, data);
		return;
	}
	node* temp = head;
	int i = 1;
	while(i<position-1){
		temp = temp->next;
		i++;
	}
	//insert at end condition
	if(temp->next==NULL)
	{
		insert_at_end(tail, data); 
		return;
	}
	//creating a node
	node* node_to_insert = new node(data);
	node_to_insert->next = temp->next;
	temp->next = node_to_insert;
	
}


void print(node* &head){
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
	node* node1 = new node(10);
	node* head = node1;
	node* tail = node1;
//	insert_at_begin(head, )
	insert_at_end(tail, 100);
	insert_at_end(tail, 200);
	insert_at_end(tail, 300);
//	print(head);
	insert_at_middle(tail, head, 4, 500);
	print(head);
	cout<<"Head : "<<head->data<<endl;
	cout<<"Tail : "<<tail->data<<endl;
	
	return 0;
}

