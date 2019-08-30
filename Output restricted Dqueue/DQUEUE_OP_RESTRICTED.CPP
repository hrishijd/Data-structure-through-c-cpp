/*
	Developer Name:Hrishi jadhav
	Subject	      :Output restricted double ended queue using array.
*/
#include<iostream.h>
#include<conio.h>
const size=10;
class Queue
{
	int     arr[size];
	int     front,rear;
	public:
			Queue();
		void    add_at_rear(int);
		void    add_at_front(int);
		int     del();
		void    display();
};
Queue::Queue()
{
	rear=front=-1;
	for(int i=0;i<size;i++)
	{
		arr[i]=-1;
	}
}
void Queue::add_at_rear(int dat)
{
	int temp;
	if(rear==size-1&&front==0)
	{
		cout<<"\nQueue is full";
	}
	else if(rear==size-1)
	{
		for(int i=rear;i>front;i--)
		{
			temp=arr[i];
			arr[i]=dat;
			dat=temp;
		}
		front--;
		arr[front]=dat;
	}
	else
	{
		if(front==-1)
		{
			front++;
		}
		rear++;
		arr[rear]=dat;
	}
}

void Queue::add_at_front(int dat)
{
	int temp;
	if(front==0&&rear==size-1)
	{
		cout<<"\nQueue is full";
	}
	else
	{
		if(front==-1)
		{
			front++;
			arr[front]=dat;
		}
		else if(front==0)
		{

			for(int i=front;i<=rear;i++)
			{
				temp  =arr[i];
				arr[i]=dat;
				dat   =temp;
			}
			rear++;
			arr[rear]=dat;
		}
		else
		{
		front--;
		arr[front]=dat;
		}
	}
}

int Queue::del()
{
	if(front==-1)
	{
		cout<<"\nARR!!!! empty queue.";
		return -1;
	}
	else
	{
		int temp=arr[front];
		arr[front]=-1;
		front++;
		if(front==rear+1)
		{
			front=rear=-1;
		}
		return temp;
	}
}
void Queue::display()
{

	for(int i=0;i<size;i++)
	{
		cout<<"\n"<<i+1<<"->"<<arr[i];
	}
}
int main()
{
	Queue obj;
	char contin;
	int choice,temp;
	do{
		clrscr();
		cout<<"\n\t\t\t\t\tOPERATIONS:";
		cout<<"\n\t\t\t\t\t1)Add new element at rear.";
		cout<<"\n\t\t\t\t\t2)Add new element at front.";
		cout<<"\n\t\t\t\t\t3)Delete element .";
		cout<<"\n\t\t\t\t\t4)Display all elements.";
		cout<<"\n\t\t\t\t\t5)exit.";
		cout<<"\n\t\t\t\t\tPlease enter your choice:";
		cin>>choice;
		clrscr();
		switch(choice)
		{
			case 1: cout<<"\nEnter element you want to add to queue:";
				cin>>temp;
				obj.add_at_rear(temp);
				break;
			case 2: cout<<"\nEnter element you want to add to queue:";
				cin>>temp;
				obj.add_at_front(temp);
				break;
			case 3: temp=obj.del();
				cout<<"\nElement deleted is"<<temp;
				break;
			case 4: obj.display();
				break;
			case 5: break;
			default: cout<<"\nwrong choice!!!!";
		}
		cout<<"\ndo you want to continue using my queue(y/n):";
		cin>>contin;
		while((contin!='y')&&(contin!='n')&&(contin!='N')&&(contin!='Y'))
		{
			cout<<"\nwrong choice";
			cout<<"\ndo you want to continue using my linked list(y/n):";
			cin>>contin;
		}

	}while((contin=='Y')||(contin=='y'));
	return 0;
}