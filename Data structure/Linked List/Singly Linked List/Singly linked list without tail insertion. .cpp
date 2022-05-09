//Singly linked list without tail insertion. 
#include <iostream>
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
};
void insert_at_begin(node* &head, int data){
  node* temp = new node(data);
  temp->next = head;
  head = temp;
}
void insert_at_end(node* &head, int data){
    node* inserted_node = new node(data);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
        
    //temp->next = inserted_node;
    temp->next = inserted_node;
    temp = inserted_node;
    
}
void insert_at_any_position(node* &head,  int position, int data){
    node* temp = head;
    node* inserted_node = new node(data);
    if(position==1){
        insert_at_begin(head, data);
        return;
    }
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    inserted_node->next = temp->next;
    temp->next = inserted_node;
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
    node* node1 = new node(5);
    node* head = node1;
    node* tail = node1;
    insert_at_begin(head, 1500);
    print(head);
    insert_at_end(head, 3000);
    print(head);
    insert_at_end(head, 13000);
    print(head);
    insert_at_end(head, 11000);
    print(head);
    insert_at_any_position(head, 3, 900);
    print(head);
    insert_at_any_position(head, 1, 1900);
    print(head);
    insert_at_any_position(head, 1, 20000);
    print(head);
    return 0;
}

