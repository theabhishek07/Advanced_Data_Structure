#include<iostream>
using namespace std;
class queue
{
	int head=0,rear=0,a[100],n,val,del;
	public:
	queue(int num)
	{
		n=num;
	}
	void push()
	{
		cout<<"enter the value: ";
		cin>>val;
		if(rear==n-1)
		cout<<"queue is full";
		else
		{
		a[rear]=val;
		rear=rear+1;
		}
	}
	void pop()
	{
		if(head==rear)
		cout<<"nothing to delete ";
		else
		{
		a[head]=del;
		head=head+1;
		}
	}
	void display()
	{
		for(int i=head;i<rear;i++)
		{
			cout<<a[i]<<"  "<<endl;
		}
	}                                                                   
};
int main()
{
	int n,c;
	int ch;
	cout<<"enter the size of queue: ";
	cin>>n;
	queue q=(n);
	do{
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"2. display"<<endl;
		cin>>c;
		cout<<endl;
		if(c==1)
		q.push();
		else
		if(c==2)
		q.pop();
		else
		if(c==3)
		q.display();
		cout<<"do you want to continue? ";
		cin>>ch;
	}while(ch==1);
	
}
