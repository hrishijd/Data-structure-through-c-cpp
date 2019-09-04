#include<iostream.h>
#include<conio.h>
struct Node{
	int data;
	Node *link;
};
class Linked
{
	Node *start;
	public:
	Linked();
	void add_node_at_beg(int dat);
	void append(int dat);
	void insert(int pos,int dat);
	void del_node_at_end();
	void del_node_at_pos(int pos);
	void del_node_at_beg();
	void display();
	int count();
};
		Linked::Linked()
		{
			start=NULL;
		}
		void Linked::add_node_at_beg(int dat)
		{
			Node *temp=new Node;
			temp->data=dat;
			temp->link=NULL;
			if(start==NULL)
			start=temp;
			else
			{
				temp->link=start;
				start=temp;
			}
		}
		void Linked::append(int dat)
		{
			Node *temp=new Node;
			temp->data=dat;
			temp->link=NULL;
			if(start==NULL)
			start=temp;
			else
			{
				Node *t=start;
				while(t->link==NULL)
				t=t->link;
				t->link=temp;
			}
		}
void Linked::insert(int pos,int dat)
		{
			Node *temp=new Node;
			temp->data=dat;
			temp->link=NULL;
			int c=count();
			int count=0;
			if(pos<c)
			{
				if(pos==0)
				{
					temp->link=start;
					start=temp;
				}
				else if(pos==c-1)
				{
					append(dat);
				}
				else
				{
					Node *t=start;
					while(count==pos-1)
					{
						t=t->link;
						count++;
					}
					temp->link=t->link;
					t->link=temp;
				}
			}
			else
			{
				cout<<"\nARR!!not much elements.";
			}
		}
void Linked::del_node_at_end()
{
	if(start==NULL)
	cout<<"\nARR!!!!no elements";
	else
	{
		Node *t=start;
		if(t->link==NULL)
		delete t;
		else
		{
			while(t->link!=NULL)
			{
				t=t->link;
			};
			delete t;
			t=NULL;
		}
	}
}
void Linked::del_node_at_pos(int pos)
{


	int c=count();
	int count=0;
	if(pos<c)
	{
		if(pos==0)
		{
			del_node_at_beg();
		}
		else if(pos==c-1)
		{
			del_node_at_end();
		}
		else
		{
			Node *t=start;
			while(count==pos-1)
			{
				t=t->link;
				count++;
			}
			Node *temp=t->link;
			t->link=t->link->link;
			delete temp;
		}
	}
	else
	{
		cout<<"\nARR!!not much elements.";
	}

}
void Linked::del_node_at_beg()
{
	if(start!=NULL)
	{
		Node *temp=start;
		start=start->link;
		delete temp;
	}
	else
	{
		cout<<"\nARR!!!!empty list.";
	}
}
void Linked::display()
{
	Node *temp=start;
	while(temp!=NULL)
	{
		cout<<"\n"<<temp->data;
	}
}
int Linked::count()
{
	Node *temp=start;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	};
	return count;
}



