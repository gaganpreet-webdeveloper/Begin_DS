//deletion  in doubly linked list
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
			this->data = data;
			this->prev = NULL;
			this->next = NULL;
		}
		//create destructor for memory free 
		~node(){
			int value = this->data;
			if(next!=NULL){
				delete next;
				next = NULL;
			}
			cout<<endl<<"memory free for node with data "<< value << endl;
		}
};
void insert_at_begin(node* &head, int data){
	//create a node
	node* temp = new node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}
void insert_at_end(node* &tail, int data){
	//create a new node
	node* temp = new node(data);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
}
void insert_at_given_position(node* &head, node* &tail, int position, int data){
	// if position is first
	if(position==1){
		insert_at_begin(head, data);
		return;
	}
	int count = 1;
	node* temp = head;
	while(count<position-1){
		temp = temp->next;
		count++;
	}
	//create a node that is to be inserted
	node* nodetoinsert = new node(data);
	nodetoinsert->next = temp->next;
	temp->next->prev = nodetoinsert->next;
	temp->next = nodetoinsert;
	nodetoinsert->prev = temp;
	
	// position is end
	if(temp->next==NULL){
		insert_at_end(tail, data);
		return;
	}
}
void delete_node(node* &head, int position){
	// if position is start
	if(position==1){
		node* temp = head;
		temp->next->prev = NULL;
		head = temp->next;
		temp->next = NULL;	
		delete temp;
	}
	else{
		node* curr = head;
		node* prev = NULL;
		int count = 1;
		while(count < position){
			prev = curr;
			curr = curr->next;
			count++;
		}
		curr->prev = NULL;
		prev->next = curr->next;
		curr->next = NULL;
		
		delete curr;
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
	node* node1 = new node(5);
	node* head = node1;
	node* tail = node1;
	insert_at_begin(head, 2008);
	insert_at_begin(head, 2002);
	insert_at_end(tail, 2006);
	insert_at_end(tail, 2004);
	print(head);
	insert_at_given_position(head, tail, 2, 5000);
	print(head);
	delete_node(head, 2);
	print(head);
return 0;
}

