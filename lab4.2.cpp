#include<iostream>
using namespace std;
class hydrogen;
class sulphur;
class oxygen
{
	int o;
	public:
		void geto(int a)
		{
			o=a;
		}
		friend void compound(oxygen o1,hydrogen h1,sulphur s1);
};
class hydrogen
{
	int h;
	public:
		void geth(int b)
		{
			h=b;
		}
	friend void compound(oxygen o1,hydrogen h1,sulphur s1);	
};
class sulphur
{
	int s;
	public:
		void gets(int c)
		{
			s=c;
		}
		friend void compound(oxygen o1,hydrogen h1,sulphur s1);
};
void compound(oxygen o1,hydrogen h1,sulphur s1)
{
	if(h1.h>=2&&s1.s>=1&&o1.o>=4)
		cout<<endl<<"H2SO4 can be formed";
	     else
	     cout<<endl<<"H2SO4 cannot be formed";
	     
	if(h1.h>=2&&s1.s>=1&&o1.o>=3)
		cout<<endl<<"H2SO3 can be formed";
		else
		cout<<endl<<"H2SO3 cannot be formed";
	
	if(h1.h>=2&&s1.s>=2&&o1.o>=2)
	cout<<endl<<"H2S2O3 can be formed";
	     else
	     cout<<endl<<"H2S2O3 cannot be formed";
}
int main()
{
	int a,b,c;
	oxygen o;
	hydrogen h;
	sulphur s;
	cout<<"enter no of oxygen: ";
	cin>>a;
	cout<<"enter no of hydrogen: ";
	cin>>b;
	cout<<"enter no of sulphur: ";
	cin>>c;
	o.geto(a);
	h.geth(b);
	s.gets(c);
	compound(o,h,s);
}
