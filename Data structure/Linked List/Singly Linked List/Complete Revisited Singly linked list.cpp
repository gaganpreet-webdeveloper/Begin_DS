// Revisited Singly linked list
# include<iostream>
using namespace std;
class node{
	//data members
	public:
		int data;
		node* next;
		//constructor
		node(int data){
			this->data = data;
			this->next = NULL;
		}
		//destructor
		~node(){
			int value = this->data;
			//memory free
			if(this->next!=NULL){
				delete next;
				this->next = NULL;
			}
			cout<<" memeory free for data : "<< value <<endl;
		}
};
/********************      Insertion  in the linked list          ************************/
void insert_at_begin(node* &head, int data){
	node* temp = new node(data);
	temp->next = head;
	head = temp;
}
void insert_at_end(node* &tail, int data){
	node* temp = new node(data);
	tail->next = temp;
	tail = temp;
	
}
void insert_at_given_position(node* &head, node* &tail,  int position, int data){
	node* insertednode = new node(data);//create new node
	//insert at begin
	if(position==1){
		insert_at_begin(head, data);
		return;
	}
	//insert at middle
	int count = 1;
	node* temp = head;
	while(count<position-1){
		temp = temp->next;
		count++;
	}
	insertednode->next = temp->next;
	temp->next = insertednode;
	
	//inserting at last position
	if(temp->next == NULL){
		insert_at_end(tail, data);
		return;
	}
	
}

/***********************      Deletion in the linked list ******************/
void delete_at_any_position(node* &head, int position){
	//delete first node
	if(position == 1){
		node* temp = head;
		head = head->next;
		//memory free
		temp->next = NULL;
		delete temp; 
		
	}
	else{  //deletion middle or end nodes 
		node* current = head;
		node* prev = NULL;
		int count = 1;
		while(count<position){
			prev = current;
			current = current->next;
			count++;
		}
		prev->next = current->next;
		current->next = NULL;
		delete current;
	}
}

void print(node* &head){
	node* temp = head;
	while(temp!=0){
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
	insert_at_begin(head, 2006);
	insert_at_begin(head, 2002);
	insert_at_begin(head, 2008);
	insert_at_end(tail, 20000);
	insert_at_given_position(head, tail,  1 , 9000);
	print(head);
	delete_at_any_position(head, 2);
	print(head);
//	    cout<<"head : "<<head->data<<endl;
//    cout<<"tail : "<<tail->data<<endl;
return 0;
}

