#include<iostream>
#include<math.h>
using namespace std;
class shape
{
private:
int l=2,r=10,h1=4,b,h2;
int area=314;
float s=17.7;
public:
void rct()
{
cout<<"area of rectangle :" <<area  <<endl;
cout<<"lenght of rectangle is :" <<l <<endl;
cout<<"breadth of rectangle is : "<<area/l <<endl;
cout<<"perimeter of rectangle is :" <<2*(l+area/l) <<endl;
}

void sqr()
{
cout<<"area of square :" <<area  <<endl;
cout<<"side of square is : 17.7" <<endl;
cout<<"perimeter of square is :" <<4*17.77 <<endl;
}
void crcl()
{
cout<<"area of circle :" <<area  <<endl;
cout<<"radius of circle is : 10" <<endl;
cout<<"perimeter of circle is :" <<2*3.14*10 <<endl;
}
void tri()
{
	cout<<"height oftriangle: 4"<<endl;
	b=area*2/h1;
	h2=sqrt(h1*h1+b*b);
	cout<<"perimeter of triangle: "<<h1+h2+b;
}

}a;
int main()
{
a.rct();
a.sqr();
a.crcl();
a.tri();
}  


