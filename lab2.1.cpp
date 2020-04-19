#include <iostream>

using namespace std;
class factorial
{
    int num,i;
    public:
    factorial(int n)
    {
        num=n;
    }
    int fact(int num)
    {
        if(num>1)
        {
        return num*fact(num-1);	
        
    }
        else 
        return 1;
    }
    ~factorial()
    {
        cout<<"memory freed ";
    }
};

int main()
{
    int n,d;
    cout<<"enter the no: ";
    cin>>n;
factorial a=factorial(n);
d=a.fact(n);
cout<<"factorial: "<<d<<endl;
return 0;
}
