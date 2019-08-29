/*
	Developer Name:Hrishi jadhav
	Subject	:Queue using array
*/
#include<iostream.h>
#include<conio.h>
const size=10;
class Stack
{
	int     arr[size];
	int     top;
	public:
			Stack();
		void    push(int);
		int     pop();
		void    display();
		int     peek();
};
Stack::Stack()
{
	top=-1;
	for(int i=0;i<size;i++)
	{
		arr[i]=-1;
	}
}
void Stack::push(int dat)
{
	if(top>=size-1)
	{
		cout<<"Stack is full";
	}
	else
	{
		top++;
		arr[top]=dat;
	}
}
int Stack::pop()
{
	if(top==-1)
	{
		cout<<"\nARR!!!! empty stack.";
		return -1;
	}
	else
	{
		int temp=arr[top];
		arr[top]=-1;
		top--;
		return temp;
	}
}
int Stack::peek()
{
	if(top==-1)
	{
		cout<<"\nARR!!!! No. elements now";
		return -1;
	}
	else
	{
	return arr[top];
	}
}
void Stack::display()
{

	for(int i=0;i<size;i++)
	{
		cout<<"\n"<<i+1<<"->"<<arr[i];
	}
}
int main()
{
	Stack obj;
	char contin;
	int choice,temp;
	do{
		clrscr();
		cout<<"\n\t\t\t\t\tOPERATIONS:";
		cout<<"\n\t\t\t\t\t1)New element or Push.";
		cout<<"\n\t\t\t\t\t2)Delete element or Pop.";
		cout<<"\n\t\t\t\t\t3)Display all elements.";
		cout<<"\n\t\t\t\t\t4)View topmost elements.";
		cout<<"\n\t\t\t\t\t5)exit.";
		cout<<"\n\t\t\t\t\tPlease enter your choice:";
		cin>>choice;
		clrscr();
		switch(choice)
		{
			case 1: cout<<"\nEnter element you want to add to stack:";
				cin>>temp;
				obj.push(temp);
				break;
			case 2: temp=obj.pop();
				cout<<"\nElement popped is"<<temp;
				break;
			case 3: obj.display();
				break;
			case 4: temp=obj.peek();
				cout<<"\nLast element is:";
				break;
			case 5: break;
			default: cout<<"\nwrong choice!!!!";
		}
		cout<<"\ndo you want to continue using my linked list(y/n):";
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