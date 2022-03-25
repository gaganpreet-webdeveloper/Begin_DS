#include<iostream>
#include<stdlib.h>
using namespace std;
// node creation
struct node{
    int data;
    struct node *next;
};
int main()
{
    // these are the empty node creates
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    //Allocate the size of struct node
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    //insertion operation
    first->data = 2008;
    first->next = second;
    second->data = 2006;
    second->next = third;
    third->data = 2004;
    third->next = NULL;
    // print all linked list
    cout<<first->data<< " ";
    cout<<second->data<< " ";
    cout<<third->data<< " ";
    cout<<first->next<< " ";
    cout<<second->next<< " ";
    cout<<third->next<< " ";
}