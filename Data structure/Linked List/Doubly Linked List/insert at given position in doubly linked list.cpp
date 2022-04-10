// insert at given position in doubly linked list
# include<iostream>
using namespace std;
class node{
	public:
		//data members
		int data;
		node* prev;
		node* next;
		//constructor
		node(int data){
			this->data =data;
			this->prev = NULL;
			this->next = NULL;
		}
};
void insert_at_begin(node* &head, int data){
	//node creation
	node* temp = new node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}
void insert_at_end(node* &tail, int data){
	// node creation
	node* temp = new node(data);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
}
void insert_at_given_position(node* &head, node* &tail, int position, int data){
	// insert at start
	if(position==1){
		insert_at_begin(head, data);
		return;
	}
	node* temp = head;
	int count = 1;
	while(count<position-1){
		temp = temp->next;
		count++;
	}
	//insert at middle
	node* nodetoinsert = new node(data);
	nodetoinsert->next = temp->next;
	temp->next->prev = nodetoinsert->next;
	temp->next = nodetoinsert;
	nodetoinsert->prev = temp;
	
	//insert at last
	if(temp->next==NULL){
		insert_at_end(tail, data);
		return;
	}
	
	
}

void print(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
node* node1 =  new node(5);
node* head = node1;
node* tail = node1;
insert_at_begin(head, 2008);
insert_at_end(tail, 2011);
insert_at_given_position(head, tail, 3, 0);
print(head);
return 0;
}

