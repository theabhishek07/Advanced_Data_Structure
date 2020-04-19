#include<iostream>
using namespace std;
class lab1
{
	private:
	char name[20];
	int roll,sem,no;
	float cgpa;
	public:
	void details()
	{
		cout<<"enter student name: ";
		cin>>name;
		cout<<"enter roll no: ";
		cin>>roll;
		cout<<"enter semester: ";
		cin>>sem;
		cout<<"enter contact no: ";
		cin>>no;
		cout<<"enter current cgpa: ";
		cin>>cgpa;
	}
	void display()
	{
		cout<<"details are:"<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"roll no: "<<roll<<endl;
		cout<<"previous semester cgpa: "<<cgpa<<endl;
		cout<<"contact no: "<<no<<endl;
		cout<<"cgpa: "<<cgpa;
	}
}s;
int main()
{
 cout<<"enter students details: "<<endl;
 s.details();
 s.display();
 return 0;
}
