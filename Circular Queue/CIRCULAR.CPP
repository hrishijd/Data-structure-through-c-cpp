/*
	Developer Name:Hrishi jadhav
	Subject	:Circular Queue using array.
*/
#include<conio.h>
#include<iostream.h>
#include<math.h>
const size=10;
class CQueue
{
	int arr[size];
	int front,rear;
	public:
		CQueue();
		void add(int);
		int del();
		void display();
};
CQueue::CQueue()
{
	front=rear=-1;
	for(int i=0;i<size;i++)
	{
		arr[i]=-1;
	}
}
void CQueue::add(int dat)
{
	if((rear!=front-1)&&!((front==0)&&(rear==size-1)))
	{
		if(rear==size-1)
		{
			rear=0;
			arr[rear]=dat;
		}
		else
		{
			if(front==-1)
			{
				front=0;
			}
			rear++;
			arr[rear]=dat;
		}
	}
	else
	{
		cout<<"ARR!!!!queue is full.";
	}
}
int CQueue::del()
{
	int temp;
	if(front!=-1)
	{
		if(front==rear)
		{
			temp=arr[front];
			arr[front]=-1;
			front=rear=-1;
			return temp;
		}
		else if(front==size-1)
		{
			temp=arr[front];
			front=0;
			return temp;
		}
		else
		{
			temp=arr[front];
			front++;
			return temp;
		}
	}
	else
	{
		cout<<"ARR!!!! empty queue.";
	}
	return -1;
}
void CQueue::display()
{
	int i=front;
	if(i!=-1)
	{
		cout<<"\n"<<arr[i];
		while(i!=rear)
		{
			if(i==size-1)
			i=0;
			else
			i++;
			cout<<"\n"<<arr[i];

		}
	}

}
