#include<iostream>
using namespace std;
class temperature
{
	protected:
	float celsius,fahrenheit;
	public:
		temperature(float x)
		{
			celsius=x;
		}
		virtual void convert()
		{
			cout<<"celsius: "<<celsius<<endl;
			fahrenheit=celsius*(9/5)+32;
			cout<<fahrenheit;	
		}
};
class temp: public temperature
{
	float kelvin;
	public:	
	temp(float y):temperature(y);
		void convert()
		{
			kelvin=y+273.15;
			cout<<"kelvin: "<<kelvin;
		}
};
int main()
{
	float t;
	cout<<"enter temperature in celsius: ";
	cin>>t;
	temperature t1(t);
	temp t2(t);
}
