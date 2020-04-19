#include<iostream>
using namespace std;
class stack
{
	struct node
{
	int val;
	struct node *next;
};
struct node *head=NULL;
	public:
		void push(int x)
		{
			node *temp=new node;
			temp->val=x;
			temp->next=head;
			head=temp;
		}
	void pop()
		{
			node *temp=new node;
			temp=head;
			head=temp->next;
			delete temp;
		}
	void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->val<<endl;
				temp=temp->next;
			}
		}
};
int main()
{
	stack s;
	int stack[100],n,data;
	cout<<"enter the size: ";
	cin>>n;
	cout<<"enter the values: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" value: ";
		cin>>data;
		s.push(data);
	}
	cout<<"how many values you want to delete: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s.pop();
	}
	cout<<"displaying the data: "<<endl;
	s.display();
	
}
