//insertion at end or tail
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
void insert_at_end(node* &tail, int data)
{
	//new node create
	node* temp = new node(data);
	tail->next = temp;
	tail = temp;
}
void print(node* &head)
{
	//create pointer to traverse
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
	node* node1 = new node(500);
	cout<<node1->data;
	node* head = node1;
	node* tail = node1;
	insert_at_end(tail, 10);
	insert_at_end(tail, 100);
	insert_at_end(tail, 1000);
	print(head);
	return 0;
}

