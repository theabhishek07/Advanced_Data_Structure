#include<iostream>
using namespace std;
class truthtable
{
 private:
 	int x,y,z;
 	public:
 		void table()
 		{
 			cout<<"x\t"<<"y\t"<<"z\t"<<"xy+z\t"<<endl;
 			for(x=0;x<=1;x++)
 			{
			 for(y=0;y<=1;y++)
 			{
			 for(z=0;z<=1;z++)
 			{
 				if((x*y+z)==2)
 				cout<<x<<"\t"<<y<<"\t"<<z<<"\t 1"<<endl;
 				else
 				cout<<x<<"\t"<<y<<"\t"<<z<<"\t "<<x*y+z<<endl;
			 }
        }
    }
		}
}a;
int main()
{
	a.table();
	return 0;
}
