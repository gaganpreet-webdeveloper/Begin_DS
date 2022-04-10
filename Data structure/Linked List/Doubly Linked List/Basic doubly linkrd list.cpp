// Doubly linked list
# include<iostream>
using namespace std;
class node{
	public:
		// data memebers
		int data;
		node * prev;
		node * next;
		// constructor
		node(int data){
			this->data = data;
			this->prev = NULL;
			this->next = NULL;			
		}
};
void insert_at_begin(node* &head, int data){
	node* temp = new node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}
void print(node* &head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" "; 
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	node* node1 = new node(50);
	node* head = node1;
	insert_at_begin(head, 2008);
	print(head);
	insert_at_begin(head, 2002);
	print(head);
	
	 

return 0;
}

