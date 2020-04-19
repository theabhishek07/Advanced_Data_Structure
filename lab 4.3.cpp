#include<iostream>
using namespace std;
class result;
class student
{
	char name[20];
	int sap,marks[6],i;
	public:
	void details()
	{
		cout<<"enter the name: ";
		cin.getline(name,20);
		cout<<"enter sap id: ";
		cin>>sap;
		cout<<"enter marks in 6 subjects: ";
		for(int i=0;i<6;i++)
		{
			cout<<"subject "<<i+1<<" :";
			cin>>marks[i];
		}
	}
	friend class result;	
};
class result
{
	int avg,total=0;
	public:
		void display(student s)
		{
			for(s.i=0;s.i<6;s.i++)
			{
				total=total+s.marks[s.i];
			}
			cout<<"total marks: "<<total;
			cout<<"average marks: "<<total/6;
			cout<<"name: "<<s.name;
			cout<<"sap id: "<<s.sap;
		}
};
int main()
{
	student s;
	result s1;
	s.details();
	s1.display(s);
}
