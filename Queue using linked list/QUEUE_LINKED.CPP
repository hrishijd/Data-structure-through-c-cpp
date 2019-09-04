/*
	Developer Name:Hrishi jadhav
	Subject	:Queue using Linked list.
*/
#include<iostream.h>
#include<conio.h>
struct Node
{
	int data;
	Node *next;
};
class Queue
{
	Node *front,*rear;
	public:
		Queue()
		{
			front=rear=NULL;
		}
		void push(int dat);

		void display();

		void del();

};
		void Queue::push(int dat)
		{
			Node *temp=new Node;
			temp->data=dat;
			temp->next=NULL;
			if(front==NULL)
			{
				front=rear=temp;
			}
			else
			{
				rear->next=temp;
				rear=temp;
			}
			cout<<"\nadded"<<rear->data;
		}
		void Queue::display()
		{
			Node *temp=front;
			while(temp!=NULL)
			{
				cout<<"\n"<<temp->data;
				temp=temp->next;
			}
		}
		void Queue::del()
		{
			Node *temp=front;
			front=front->next;
			delete temp;
		}
