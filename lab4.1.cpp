#include<iostream>
using namespace std;
class student
{
	protected:
	char name[20],gender[5];
	int roll;
	public:
	void details()
	{
		cout<<"enter the name: ";
		cin.getline(name,20);
		cout<<"enter the gender: ";
		cin.getline(gender,5);
		cout<<"enter the roll no: ";
		cin>>roll;
	}
	void display()
	{
		cout<<"name: "<<name<<endl;
		cout<<"gender: "<<gender<<endl;
		cout<<"roll no: "<<roll<<endl;
	}	
};
class internal:virtual public student
{
	protected:
		int marks1[6],i;
		public:
			void  int_marks()
			{
				cout<<"internal marks: \n";
				for(i=0;i<6;i++)
				{
					cout<<"enter "<<i+1<<" subject's marks: ";
					cin>>marks1[i];
				}
			}
			void int_display()
			{
				for(i=0;i<6;i++)
				{
					cout<<i+1<<" subject's marks: "<<marks1[i]<<endl;
				}
			}
};
class external:virtual public student
{
	protected:
		int marks2[6],j;
		public:
			void ext_marks()
			{
				cout<<"external marks\n";
				for(j=0;j<6;j++)
				{
				cout<<"enter "<<j+1<<" subject's marks: ";
				cin>>marks2[j];	
				}
			}
			void ext_display()
			{
				
			for(j=0;j<6;j++)
				{
					cout<<j+1<<" subject's marks: "<<marks2[j]<<endl;
				}	
			}
};
class result: public internal, public external
{
	 float total,total1=0,total2=0;
	public:
		
	
		
		void cal_result()
		{
			
		for(i=0;i<6;i++)
		{
			total1=total1+marks1[i];
		}
		
		for(j=0;j<6;j++)
		{
			total2=total2+marks1[j];
		}
		total=(0.4*total1)/6+(0.6*total2)/6;	
		}
		void result_display()
		{
			cout<<"final result: "<<total<<"%";
		}
};
int main()
{
	result r;
	r.details();
	r.display();
	r.int_marks();
	r.int_display();
    r.ext_marks();
    r.ext_display();
	r.cal_result();
	r.result_display();
	return 0;
}
