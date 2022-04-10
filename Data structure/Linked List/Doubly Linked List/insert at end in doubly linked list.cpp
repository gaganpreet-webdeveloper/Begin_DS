// insert at end in doubly linked list
# include<iostream>
using namespace std;
class node{
	public:
		//data members
		int data;
		node* prev;
		node* next;
		//construcor
		node(int data){
			this->data = data;
			this->prev = NULL;
			this->next = NULL;
		}
};
void insert_at_end(node* &tail, int data){
	node* temp = new node(data);
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
	
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
insert_at_end(tail, 2008);
insert_at_end(tail, 2002);
print(head);
return 0;
}

