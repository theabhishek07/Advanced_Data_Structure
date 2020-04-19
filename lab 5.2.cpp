#include<iostream>
using namespace std;
class area
{
	int side1,side2;
	public:
		area(int x,int y)
		{
			side1=x;
			side2=y;
		}
	void choice()
		{
		   int c;
		   int s;
		   cout<<"1. area of square"<<endl;
		   cout<<"2. area of rectangle"<<endl;
		   cout<<"3. area of triangle"<<endl<<endl;
		   cout<<"enter your choice: ";
		   cin>>c;
		   switch(c)
		   {
		   	case 1:
		   	s=calculate(side1);
			   break;
			   case 2:
			  s=calculate(side1,side2);
			  break;
			  case 3:
			  s=calculate(side1,side2);
			  break;	
		   }
		   cout<<s;
		}
	int calculate(int a)
		{
			return a*a;
		}
		int calculate(int a,int b)
		{
			return a*b;
		}
		float calculate(float a,float b)
		{
		
			return 0.5*a*b;
		}
};    
int main()
{
	int a,b;
	cout<<"enter side 1: ";
	cin>>a;
	cout<<"enter side 2: ";
	cin>>b;
	area ar(a,b);
	ar.choice();
}
