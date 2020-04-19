#include<iostream>
using namespace std;
class conversion
{
	private:
		int num,a[8],i,j=0;
	public:
		void con()
		{
			cout<<"enter the no: ";
			cin>>num;
			for(i=0;num>0;i++)
			{
				a[i]=num%2;
				num=num/2;
				j++;
			}
			for(i=j+1;i>=0;i--)
			cout<<a[i];
		}
}c;
int main()
{
c.con();	
	return 0;			
}
