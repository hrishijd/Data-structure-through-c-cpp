/*
	Developer Name:Hrishi jadhav
	Subject       : Stack using Linked list.
*/
#include<iostream.h>
#include<conio.h>
struct Node
{
	int data;
	Node *next;
};
class Stack
{
	Node *top;
	public:
		Stack()
		{
			top=NULL;
		}
		void push(int dat);

		void display();

		void pop();

};
		void Stack::push(int dat)
		{
			Node *temp=new Node;
			temp->data=dat;
			temp->next=NULL;
			if(top==NULL)
			{
				top=temp;
			}
			else
			{
				temp->next=top;
				top=temp;
			}
			cout<<"\nadded"<<top->data;
		}
		void Stack::display()
		{
			Node *temp=top;
			while(temp!=NULL)
			{
				cout<<"\n"<<temp->data;
				temp=temp->next;
			}
		}
		void Stack::pop()
		{
			Node *temp=top;
			top=top->next;
			delete temp;
		}
