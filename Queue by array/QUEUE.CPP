/*
	Developer Name:Hrishi jadhav
	Subject	:Queue using array
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
		void    add(int);
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
void Queue::add(int dat)
{
	if(rear==size-1)
	{
		cout<<"\nQueue is full";
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
		cout<<"\n\t\t\t\t\t1)Add New element.";
		cout<<"\n\t\t\t\t\t2)Delete element .";
		cout<<"\n\t\t\t\t\t3)Display all elements.";
		cout<<"\n\t\t\t\t\t4)exit.";
		cout<<"\n\t\t\t\t\tPlease enter your choice:";
		cin>>choice;
		clrscr();
		switch(choice)
		{
			case 1: cout<<"\nEnter element you want to add to queue:";
				cin>>temp;
				obj.add(temp);
				break;
			case 2: temp=obj.del();
				cout<<"\nElement deleted is"<<temp;
				break;
			case 3: obj.display();
				break;
			case 4: break;
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